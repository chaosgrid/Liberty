#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6f4f400 _public_6f4f400
#define public_6f4f408 _public_6f4f408
#define public_6f4f426 _public_6f4f426

PROC_DECLARE(0x6f4f3d0, internal_6f4f3d0, public_6f4f3d0);
extern "C" NAKED register_t __cdecl internal_6f4f3d0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x9C]
        push ebx
        mov ecx, esi
        call public_6fa7200
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6f4f400
        mov ecx, dword ptr ds : [ebx]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6f4f400
        lea eax, ss:[esp+0x14]
        jmp public_6f4f408
        public_6f4f400 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6f4f408 : nop
        mov ecx, dword ptr ds : [edi+0xA0]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        pop ebx
        je public_6f4f426
        mov edx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        mov al, 1
        pop ecx
        ret 8
        public_6f4f426 : nop
        xor al, al
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f4f3d0)
    }
}

#undef public_6f4f400
#undef public_6f4f408
#undef public_6f4f426
