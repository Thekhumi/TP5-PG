#include "nana/gui.hpp"
#include <nana/gui/widgets/label.hpp>
#include "nana/gui/widgets/button.hpp"
int main()
{
	using namespace nana;
	form fm;
	drawing{ fm }.draw([](paint::graphics& graph)
	{
		std::string hw = "ScoreManager";
		std::string score1 = "Score1";
		std::string score2 = "Score2";
		std::string score3 = "Score3";
		std::string score4 = "Score4";

		auto hw_size = graph.text_extent_size(hw);
		auto score1_size = graph.text_extent_size(score1);
		auto score2_size = graph.text_extent_size(score2);
		auto score3_size = graph.text_extent_size(score3);
		auto score4_size = graph.text_extent_size(score4);
		graph.string(
			point{ static_cast<int>(graph.width() - hw_size.width) / 2,
			static_cast<int>(graph.height() - hw_size.height) / 10 }
		, hw);
		graph.string(
			point{ static_cast<int>(graph.width() - score1_size.width) / 2,
			static_cast<int>(graph.height() - 150) }
		, score1);
		graph.string(
			point{ static_cast<int>(graph.width() - score3_size.width) / 2,
			static_cast<int>(graph.height() - 125)}
		, score2);
		graph.string(
			point{ static_cast<int>(graph.width() - score3_size.width) / 2,
			static_cast<int>(graph.height() - 100) }
		, score3);
		graph.string(
			point{ static_cast<int>(graph.width() - score4_size.width) / 2,
			static_cast<int>(graph.height() - 75) }
		, score4);
	});
	fm.show();
	exec();
}