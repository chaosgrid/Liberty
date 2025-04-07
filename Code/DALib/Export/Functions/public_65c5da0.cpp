#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c5da0);

#define public_65c5dc0 _public_65c5dc0

PROC_DECLARE(0x65c5da0, internal_65c5da0, public_65c5da0);
extern "C" NAKED register_t __cdecl internal_65c5da0()
{
    __asm
    {
        sub esp, 0x44
        mov edx, dword ptr ss : [esp+0x48]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, 0xFFFFFFFE
        mov dword ptr ss : [esp+0x10], ecx
        lea eax, ds:[edx+2]
        lea esi, ss:[esp+0x14]
        sub edi, edx
        lea ecx, ds:[ecx]
        public_65c5dc0 : nop
        movzx ebx, byte ptr ds : [eax-1]
        xor edx, edx
        mov dh, byte ptr ds : [eax+1]
        add eax, 4
        add esi, 4
        mov dl, byte ptr ds : [eax-4]
        shl edx, 8
        or edx, ebx
        movzx ebx, byte ptr ds : [eax-6]
        shl edx, 8
        or edx, ebx
        mov dword ptr ds : [esi-4], edx
        lea edx, ds:[edi+eax]
        cmp edx, 0x40
        jb public_65c5dc0
        mov edi, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, edi
        not eax
        and eax, edx
        mov ebx, esi
        and ebx, edi
        or eax, ebx
        add eax, ebp
        lea ecx, ds:[ecx+eax-0x28955B88]
        mov eax, ecx
        shl ecx, 7
        mov ebp, dword ptr ss : [esp+0x18]
        shr eax, 0x19
        or eax, ecx
        add eax, edi
        mov ecx, eax
        not ecx
        and ecx, esi
        mov ebx, edi
        and ebx, eax
        or ecx, ebx
        add ecx, ebp
        lea ecx, ds:[edx+ecx-0x173848AA]
        mov edx, ecx
        shl ecx, 0xC
        mov ebp, dword ptr ss : [esp+0x1C]
        shr edx, 0x14
        or edx, ecx
        add edx, eax
        mov ecx, edx
        not ecx
        and ecx, edi
        mov ebx, edx
        and ebx, eax
        or ecx, ebx
        add ecx, ebp
        lea ecx, ds:[esi+ecx+0x242070DB]
        mov esi, ecx
        mov ebp, dword ptr ss : [esp+0x20]
        shl ecx, 0x11
        shr esi, 0xF
        or esi, ecx
        add esi, edx
        mov ecx, esi
        not ecx
        and ecx, eax
        mov ebx, edx
        and ebx, esi
        or ecx, ebx
        add ecx, ebp
        mov ebp, dword ptr ss : [esp+0x24]
        lea ecx, ds:[edi+ecx-0x3E423112]
        mov edi, ecx
        shr ecx, 0xA
        shl edi, 0x16
        or edi, ecx
        add edi, esi
        mov ecx, edi
        not ecx
        and ecx, edx
        mov ebx, esi
        and ebx, edi
        or ecx, ebx
        add ecx, ebp
        mov ebp, dword ptr ss : [esp+0x28]
        lea ecx, ds:[eax+ecx-0xA83F051]
        mov eax, ecx
        shl ecx, 7
        shr eax, 0x19
        or eax, ecx
        add eax, edi
        mov ecx, eax
        not ecx
        mov ebx, edi
        and ecx, esi
        and ebx, eax
        or ecx, ebx
        add ecx, ebp
        lea ecx, ds:[edx+ecx+0x4787C62A]
        mov edx, ecx
        shl ecx, 0xC
        mov ebp, dword ptr ss : [esp+0x2C]
        shr edx, 0x14
        or edx, ecx
        add edx, eax
        mov ecx, edx
        not ecx
        and ecx, edi
        mov ebx, edx
        and ebx, eax
        or ecx, ebx
        add ecx, ebp
        lea ecx, ds:[esi+ecx-0x57CFB9ED]
        mov esi, ecx
        shl ecx, 0x11
        mov ebp, dword ptr ss : [esp+0x30]
        shr esi, 0xF
        or esi, ecx
        add esi, edx
        mov ecx, esi
        not ecx
        and ecx, eax
        mov ebx, edx
        and ebx, esi
        or ecx, ebx
        add ecx, ebp
        lea ecx, ds:[edi+ecx-0x2B96AFF]
        mov edi, ecx
        shr ecx, 0xA
        mov ebp, dword ptr ss : [esp+0x34]
        shl edi, 0x16
        or edi, ecx
        add edi, esi
        mov ebx, esi
        and ebx, edi
        mov ecx, edi
        not ecx
        and ecx, edx
        or ecx, ebx
        add ecx, ebp
        lea ecx, ds:[eax+ecx+0x698098D8]
        mov ebp, dword ptr ss : [esp+0x38]
        mov eax, ecx
        shl ecx, 7
        shr eax, 0x19
        or eax, ecx
        add eax, edi
        mov ecx, eax
        not ecx
        and ecx, esi
        mov ebx, edi
        and ebx, eax
        or ecx, ebx
        add ecx, ebp
        mov ebp, dword ptr ss : [esp+0x3C]
        lea ecx, ds:[edx+ecx-0x74BB0851]
        mov edx, ecx
        shl ecx, 0xC
        shr edx, 0x14
        or edx, ecx
        add edx, eax
        mov ecx, edx
        not ecx
        and ecx, edi
        mov ebx, edx
        and ebx, eax
        or ecx, ebx
        add ecx, ebp
        lea ecx, ds:[esi+ecx-0xA44F]
        mov esi, ecx
        shl ecx, 0x11
        shr esi, 0xF
        or esi, ecx
        add esi, edx
        mov ecx, esi
        not ecx
        and ecx, eax
        mov ebx, edx
        mov ebp, dword ptr ss : [esp+0x40]
        and ebx, esi
        or ecx, ebx
        add ecx, ebp
        lea ecx, ds:[edi+ecx-0x76A32842]
        mov edi, ecx
        shr ecx, 0xA
        mov ebp, dword ptr ss : [esp+0x44]
        shl edi, 0x16
        or edi, ecx
        add edi, esi
        mov ecx, edi
        not ecx
        and ecx, edx
        mov ebx, esi
        and ebx, edi
        or ecx, ebx
        add ecx, ebp
        lea ecx, ds:[eax+ecx+0x6B901122]
        mov eax, ecx
        shl ecx, 7
        shr eax, 0x19
        or eax, ecx
        add eax, edi
        mov ecx, eax
        not ecx
        and ecx, esi
        mov ebx, edi
        and ebx, eax
        or ecx, ebx
        add ecx, dword ptr ss : [esp+0x48]
        lea ecx, ds:[edx+ecx-0x2678E6D]
        mov edx, ecx
        shl ecx, 0xC
        shr edx, 0x14
        or edx, ecx
        add edx, eax
        mov ebx, edx
        not ebx
        mov ecx, ebx
        and ecx, edi
        mov ebp, edx
        and ebp, eax
        or ecx, ebp
        add ecx, dword ptr ss : [esp+0x4C]
        lea ecx, ds:[esi+ecx-0x5986BC72]
        mov esi, ecx
        shl ecx, 0x11
        shr esi, 0xF
        or esi, ecx
        add esi, edx
        mov ecx, esi
        not ecx
        mov dword ptr ss : [esp+0x58], ecx
        and ecx, eax
        mov ebp, edx
        and ebp, esi
        or ecx, ebp
        mov ebp, dword ptr ss : [esp+0x50]
        add ecx, ebp
        lea ecx, ds:[edi+ecx+0x49B40821]
        mov edi, ecx
        shr ecx, 0xA
        shl edi, 0x16
        or edi, ecx
        and ebx, esi
        add edi, esi
        mov ecx, edx
        and ecx, edi
        or ebx, ecx
        add ebx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x58]
        lea ebx, ds:[eax+ebx-0x9E1DA9E]
        mov eax, ebx
        shr eax, 0x1B
        shl ebx, 5
        or eax, ebx
        add eax, edi
        and ecx, edi
        mov ebx, esi
        and ebx, eax
        or ecx, ebx
        add ecx, dword ptr ss : [esp+0x2C]
        lea ecx, ds:[edx+ecx-0x3FBF4CC0]
        mov edx, ecx
        shl ecx, 9
        shr edx, 0x17
        or edx, ecx
        add edx, eax
        mov ecx, edi
        not ecx
        and ecx, eax
        mov ebx, edx
        and ebx, edi
        or ecx, ebx
        add ecx, dword ptr ss : [esp+0x40]
        lea ecx, ds:[esi+ecx+0x265E5A51]
        mov esi, ecx
        shl ecx, 0xE
        shr esi, 0x12
        or esi, ecx
        add esi, edx
        mov ecx, eax
        not ecx
        and ecx, edx
        mov ebx, esi
        and ebx, eax
        or ecx, ebx
        add ecx, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edi+ecx-0x16493856]
        mov edi, ecx
        shr ecx, 0xC
        shl edi, 0x14
        or edi, ecx
        add edi, esi
        mov ecx, edx
        not ecx
        and ecx, esi
        mov ebx, edx
        and ebx, edi
        or ecx, ebx
        add ecx, dword ptr ss : [esp+0x28]
        lea ecx, ds:[eax+ecx-0x29D0EFA3]
        mov eax, ecx
        shl ecx, 5
        shr eax, 0x1B
        or eax, ecx
        mov ecx, esi
        not ecx
        and ecx, edi
        mov ebx, esi
        add eax, edi
        and ebx, eax
        or ecx, ebx
        add ecx, dword ptr ss : [esp+0x3C]
        lea ecx, ds:[edx+ecx+0x2441453]
        mov edx, ecx
        shl ecx, 9
        shr edx, 0x17
        or edx, ecx
        add edx, eax
        mov ecx, edi
        not ecx
        and ecx, eax
        mov ebx, edx
        and ebx, edi
        or ecx, ebx
        add ecx, ebp
        lea ecx, ds:[esi+ecx-0x275E197F]
        mov esi, ecx
        shr esi, 0x12
        shl ecx, 0xE
        or esi, ecx
        add esi, edx
        mov ecx, eax
        not ecx
        and ecx, edx
        mov ebx, esi
        and ebx, eax
        or ecx, ebx
        add ecx, dword ptr ss : [esp+0x24]
        lea ecx, ds:[edi+ecx-0x182C0438]
        mov edi, ecx
        shr ecx, 0xC
        shl edi, 0x14
        or edi, ecx
        add edi, esi
        mov ecx, edx
        not ecx
        and ecx, esi
        mov ebx, edx
        and ebx, edi
        or ecx, ebx
        add ecx, dword ptr ss : [esp+0x38]
        lea ecx, ds:[eax+ecx+0x21E1CDE6]
        mov eax, ecx
        shl ecx, 5
        shr eax, 0x1B
        or eax, ecx
        add eax, edi
        mov ecx, esi
        not ecx
        and ecx, edi
        mov ebx, esi
        and ebx, eax
        or ecx, ebx
        add ecx, dword ptr ss : [esp+0x4C]
        lea ecx, ds:[edx+ecx-0x3CC8F82A]
        mov edx, ecx
        shl ecx, 9
        shr edx, 0x17
        or edx, ecx
        add edx, eax
        mov ecx, edi
        not ecx
        and ecx, eax
        mov ebx, edx
        and ebx, edi
        or ecx, ebx
        add ecx, dword ptr ss : [esp+0x20]
        lea ecx, ds:[esi+ecx-0xB2AF279]
        mov esi, ecx
        shl ecx, 0xE
        shr esi, 0x12
        or esi, ecx
        add esi, edx
        mov ecx, eax
        not ecx
        and ecx, edx
        mov ebx, esi
        and ebx, eax
        or ecx, ebx
        add ecx, dword ptr ss : [esp+0x34]
        lea ecx, ds:[edi+ecx+0x455A14ED]
        mov edi, ecx
        shr ecx, 0xC
        shl edi, 0x14
        or edi, ecx
        mov ecx, edx
        not ecx
        add edi, esi
        and ecx, esi
        mov ebx, edx
        and ebx, edi
        or ecx, ebx
        add ecx, dword ptr ss : [esp+0x48]
        lea ecx, ds:[eax+ecx-0x561C16FB]
        mov eax, ecx
        shr eax, 0x1B
        shl ecx, 5
        or eax, ecx
        add eax, edi
        mov ecx, esi
        not ecx
        and ecx, edi
        mov ebx, esi
        and ebx, eax
        or ecx, ebx
        add ecx, dword ptr ss : [esp+0x1C]
        lea ecx, ds:[edx+ecx-0x3105C08]
        mov edx, ecx
        shl ecx, 9
        shr edx, 0x17
        or edx, ecx
        add edx, eax
        mov ebx, edx
        and ebx, edi
        mov ecx, edi
        not ecx
        and ecx, eax
        or ecx, ebx
        add ecx, dword ptr ss : [esp+0x30]
        lea ecx, ds:[esi+ecx+0x676F02D9]
        mov esi, ecx
        shl ecx, 0xE
        shr esi, 0x12
        or esi, ecx
        add esi, edx
        mov ecx, eax
        not ecx
        and ecx, edx
        mov ebx, esi
        and ebx, eax
        or ecx, ebx
        add ecx, dword ptr ss : [esp+0x44]
        mov ebx, dword ptr ss : [esp+0x28]
        lea ecx, ds:[edi+ecx-0x72D5B376]
        mov edi, ecx
        shr ecx, 0xC
        shl edi, 0x14
        or edi, ecx
        mov ecx, edx
        xor ecx, esi
        add edi, esi
        xor ecx, edi
        add ecx, ebx
        mov ebx, dword ptr ss : [esp+0x34]
        lea ecx, ds:[eax+ecx-0x5C6BE]
        mov eax, ecx
        shl ecx, 4
        shr eax, 0x1C
        or eax, ecx
        mov ecx, esi
        xor ecx, edi
        add eax, edi
        xor ecx, eax
        add ecx, ebx
        lea edx, ds:[edx+ecx-0x788E097F]
        mov ecx, dword ptr ss : [esp+0x40]
        mov ebx, edx
        shl edx, 0xB
        shr ebx, 0x15
        or ebx, edx
        add ebx, eax
        mov edx, ebx
        xor edx, edi
        xor edx, eax
        add edx, ecx
        lea ecx, ds:[esi+edx+0x6D9D6122]
        mov esi, ecx
        shr esi, 0x10
        shl ecx, 0x10
        or esi, ecx
        add esi, ebx
        mov ecx, ebx
        xor ecx, esi
        mov edx, ecx
        xor edx, eax
        add edx, dword ptr ss : [esp+0x4C]
        lea edi, ds:[edi+edx-0x21AC7F4]
        mov edx, edi
        shr edi, 9
        shl edx, 0x17
        or edx, edi
        mov edi, dword ptr ss : [esp+0x18]
        add edx, esi
        xor ecx, edx
        add ecx, edi
        lea ecx, ds:[eax+ecx-0x5B4115BC]
        mov eax, ecx
        shl ecx, 4
        mov edi, dword ptr ss : [esp+0x24]
        shr eax, 0x1C
        or eax, ecx
        add eax, edx
        mov ecx, esi
        xor ecx, edx
        xor ecx, eax
        add ecx, edi
        lea ebx, ds:[ebx+ecx+0x4BDECFA9]
        mov edi, ebx
        shl ebx, 0xB
        shr edi, 0x15
        or edi, ebx
        mov ebx, dword ptr ss : [esp+0x30]
        add edi, eax
        mov ecx, edi
        xor ecx, edx
        xor ecx, eax
        add ecx, ebx
        lea ecx, ds:[esi+ecx-0x944B4A0]
        mov esi, ecx
        shl ecx, 0x10
        shr esi, 0x10
        or esi, ecx
        add esi, edi
        mov ecx, edi
        xor ecx, esi
        mov ebx, ecx
        xor ebx, eax
        add ebx, dword ptr ss : [esp+0x3C]
        lea ebx, ds:[edx+ebx-0x41404390]
        mov edx, ebx
        shr ebx, 9
        shl edx, 0x17
        or edx, ebx
        mov ebx, dword ptr ss : [esp+0x48]
        add edx, esi
        xor ecx, edx
        add ecx, ebx
        mov ebx, dword ptr ss : [esp+0x14]
        lea ecx, ds:[eax+ecx+0x289B7EC6]
        mov eax, ecx
        shl ecx, 4
        shr eax, 0x1C
        or eax, ecx
        mov ecx, esi
        xor ecx, edx
        add eax, edx
        xor ecx, eax
        add ecx, ebx
        mov ebx, dword ptr ss : [esp+0x20]
        lea ecx, ds:[edi+ecx-0x155ED806]
        mov edi, ecx
        shl ecx, 0xB
        shr edi, 0x15
        or edi, ecx
        add edi, eax
        mov ecx, edi
        xor ecx, edx
        xor ecx, eax
        add ecx, ebx
        lea esi, ds:[esi+ecx-0x2B10CF7B]
        mov ebx, esi
        shr ebx, 0x10
        shl esi, 0x10
        or ebx, esi
        add ebx, edi
        mov ecx, edi
        xor ecx, ebx
        mov esi, ecx
        xor esi, eax
        add esi, dword ptr ss : [esp+0x2C]
        lea esi, ds:[edx+esi+0x4881D05]
        mov edx, esi
        shr esi, 9
        shl edx, 0x17
        or edx, esi
        mov esi, dword ptr ss : [esp+0x38]
        add edx, ebx
        xor ecx, edx
        add ecx, esi
        lea ecx, ds:[eax+ecx-0x262B2FC7]
        mov eax, ecx
        shl ecx, 4
        mov esi, dword ptr ss : [esp+0x44]
        shr eax, 0x1C
        or eax, ecx
        add eax, edx
        mov ecx, ebx
        xor ecx, edx
        xor ecx, eax
        add ecx, esi
        lea edi, ds:[edi+ecx-0x1924661B]
        mov esi, edi
        shr esi, 0x15
        shl edi, 0xB
        or esi, edi
        add esi, eax
        mov ecx, esi
        xor ecx, edx
        xor ecx, eax
        add ecx, ebp
        lea ebx, ds:[ebx+ecx+0x1FA27CF8]
        mov edi, ebx
        shl ebx, 0x10
        shr edi, 0x10
        or edi, ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        add edi, esi
        mov ecx, esi
        xor ecx, edi
        xor ecx, eax
        add ecx, ebx
        lea ecx, ds:[edx+ecx-0x3B53A99B]
        mov ebx, dword ptr ss : [esp+0x14]
        mov edx, ecx
        shr ecx, 9
        shl edx, 0x17
        or edx, ecx
        mov ecx, esi
        not ecx
        add edx, edi
        or ecx, edx
        xor ecx, edi
        add ecx, ebx
        mov ebx, dword ptr ss : [esp+0x30]
        lea ecx, ds:[eax+ecx-0xBD6DDBC]
        mov eax, ecx
        shl ecx, 6
        shr eax, 0x1A
        or eax, ecx
        add eax, edx
        mov ecx, edi
        not ecx
        or ecx, eax
        xor ecx, edx
        add ecx, ebx
        mov ebx, dword ptr ss : [esp+0x4C]
        lea ecx, ds:[esi+ecx+0x432AFF97]
        mov esi, ecx
        shl ecx, 0xA
        shr esi, 0x16
        or esi, ecx
        mov ecx, edx
        add esi, eax
        not ecx
        or ecx, esi
        xor ecx, eax
        add ecx, ebx
        lea ecx, ds:[edi+ecx-0x546BDC59]
        mov edi, ecx
        shl ecx, 0xF
        mov ebx, dword ptr ss : [esp+0x28]
        shr edi, 0x11
        or edi, ecx
        add edi, esi
        mov ecx, eax
        not ecx
        or ecx, edi
        xor ecx, esi
        add ecx, ebx
        lea ecx, ds:[edx+ecx-0x36C5FC7]
        mov edx, ecx
        shr ecx, 0xB
        mov ebx, dword ptr ss : [esp+0x44]
        shl edx, 0x15
        or edx, ecx
        add edx, edi
        mov ecx, esi
        not ecx
        or ecx, edx
        xor ecx, edi
        add ecx, ebx
        lea ecx, ds:[eax+ecx+0x655B59C3]
        mov eax, ecx
        shl ecx, 6
        mov ebx, dword ptr ss : [esp+0x20]
        shr eax, 0x1A
        or eax, ecx
        add eax, edx
        mov ecx, edi
        not ecx
        or ecx, eax
        xor ecx, edx
        add ecx, ebx
        lea ecx, ds:[esi+ecx-0x70F3336E]
        mov esi, ecx
        shl ecx, 0xA
        mov ebx, dword ptr ss : [esp+0x3C]
        shr esi, 0x16
        or esi, ecx
        add esi, eax
        mov ecx, edx
        not ecx
        or ecx, esi
        xor ecx, eax
        add ecx, ebx
        lea ecx, ds:[edi+ecx-0x100B83]
        mov ebx, dword ptr ss : [esp+0x18]
        mov edi, ecx
        shl ecx, 0xF
        shr edi, 0x11
        or edi, ecx
        mov ecx, eax
        not ecx
        add edi, esi
        or ecx, edi
        xor ecx, esi
        add ecx, ebx
        mov ebx, dword ptr ss : [esp+0x34]
        lea ecx, ds:[edx+ecx-0x7A7BA22F]
        mov edx, ecx
        shr ecx, 0xB
        shl edx, 0x15
        or edx, ecx
        mov ecx, esi
        not ecx
        add edx, edi
        or ecx, edx
        xor ecx, edi
        add ecx, ebx
        lea ecx, ds:[eax+ecx+0x6FA87E4F]
        mov eax, ecx
        shl ecx, 6
        shr eax, 0x1A
        or eax, ecx
        mov ecx, edi
        add eax, edx
        not ecx
        or ecx, eax
        xor ecx, edx
        add ecx, ebp
        lea ecx, ds:[esi+ecx-0x1D31920]
        mov esi, ecx
        shl ecx, 0xA
        mov ebp, dword ptr ss : [esp+0x2C]
        shr esi, 0x16
        or esi, ecx
        add esi, eax
        mov ecx, edx
        not ecx
        or ecx, esi
        xor ecx, eax
        add ecx, ebp
        lea ecx, ds:[edi+ecx-0x5CFEBCEC]
        mov edi, ecx
        shl ecx, 0xF
        mov ebp, dword ptr ss : [esp+0x48]
        shr edi, 0x11
        or edi, ecx
        add edi, esi
        mov ecx, eax
        not ecx
        or ecx, edi
        xor ecx, esi
        add ecx, ebp
        lea ecx, ds:[edx+ecx+0x4E0811A1]
        mov edx, ecx
        shr ecx, 0xB
        mov ebp, dword ptr ss : [esp+0x24]
        shl edx, 0x15
        or edx, ecx
        add edx, edi
        mov ecx, esi
        not ecx
        or ecx, edx
        xor ecx, edi
        add ecx, ebp
        lea ecx, ds:[eax+ecx-0x8AC817E]
        mov ebp, dword ptr ss : [esp+0x40]
        mov eax, ecx
        shl ecx, 6
        mov ebx, dword ptr ss : [esp+0x1C]
        shr eax, 0x1A
        or eax, ecx
        mov ecx, edi
        not ecx
        add eax, edx
        or ecx, eax
        xor ecx, edx
        add ecx, ebp
        lea ecx, ds:[esi+ecx-0x42C50DCB]
        mov esi, ecx
        shl ecx, 0xA
        shr esi, 0x16
        or esi, ecx
        add esi, eax
        mov ecx, edx
        not ecx
        or ecx, esi
        xor ecx, eax
        add ecx, ebx
        lea edi, ds:[edi+ecx+0x2AD7D2BB]
        mov ebx, edi
        shl edi, 0xF
        shr ebx, 0x11
        or ebx, edi
        mov edi, dword ptr ss : [esp+0x38]
        mov ecx, eax
        not ecx
        add ebx, esi
        or ecx, ebx
        xor ecx, esi
        add ecx, edi
        lea edx, ds:[edx+ecx-0x14792C6F]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [ecx+4]
        add edi, eax
        mov dword ptr ds : [ecx+4], edi
        mov eax, edx
        mov edi, dword ptr ds : [ecx+8]
        shl eax, 0x15
        shr edx, 0xB
        or eax, edx
        add eax, edi
        add eax, ebx
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ds : [ecx+0xC]
        add eax, ebx
        mov dword ptr ds : [ecx+0xC], eax
        mov eax, dword ptr ds : [ecx+0x10]
        pop edi
        add eax, esi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+0x10], eax
        pop ebx
        add esp, 0x44
        ret 4
        UNREACHABLE_TRAP(0x65c5da0)
    }
}

#undef public_65c5dc0
