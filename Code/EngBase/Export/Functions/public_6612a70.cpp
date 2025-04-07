#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612a70);
CLANG_FORWARD_PROC_SYMBOL(public_6612b20);
CLANG_FORWARD_PROC_SYMBOL(public_6614290);

#define public_6612a8f _public_6612a8f
#define public_6612acc _public_6612acc
#define public_6612ad7 _public_6612ad7
#define public_6612ae7 _public_6612ae7
#define public_6612afe _public_6612afe
#define public_6612b05 _public_6612b05
#define public_6612b17 _public_6612b17

PROC_DECLARE(0x6612a70, internal_6612a70, public_6612a70);
extern "C" NAKED register_t __cdecl internal_6612a70()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [ecx+0x10]
        cmp ebx, ecx
        mov dword ptr ss : [esp+4], ecx
        jae public_6612b17
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6612a8f : nop
        mov esi, dword ptr ds : [ebx]
        push edi
        mov ecx, esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x20]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, 1
        jne public_6612b05
        push esi
        mov ecx, ebp
        call public_6614290
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x1C], eax
        cmp eax, ecx
        je public_6612acc
        add eax, 0xC
        mov ecx, esi
        push eax
        call public_6612b20
        test al, al
        jne public_6612acc
        lea eax, ss:[esp+0x1C]
        jmp public_6612ad7
        public_6612acc : nop
        mov ecx, dword ptr ss : [ebp+4]
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], ecx
        public_6612ad7 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+4]
        cmp eax, ecx
        je public_6612b05
        mov eax, dword ptr ds : [eax+0x1C]
        test eax, eax
        je public_6612b05
        public_6612ae7 : nop
        cmp dword ptr ds : [eax+4], 2
        jne public_6612afe
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [eax+0x18], edx
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+0x1C], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+0x20], edx
        public_6612afe : nop
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        jne public_6612ae7
        public_6612b05 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add ebx, 4
        cmp ebx, eax
        jb public_6612a8f
        pop edi
        pop esi
        pop ebp
        public_6612b17 : nop
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6612a70)
    }
}

#undef public_6612a8f
#undef public_6612acc
#undef public_6612ad7
#undef public_6612ae7
#undef public_6612afe
#undef public_6612b05
#undef public_6612b17
