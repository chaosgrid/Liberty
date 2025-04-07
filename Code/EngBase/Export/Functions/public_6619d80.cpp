#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6617220);
CLANG_FORWARD_PROC_SYMBOL(public_6619d80);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6619d98 _public_6619d98
#define public_6619da0 _public_6619da0
#define public_6619db8 _public_6619db8
#define public_6619dd9 _public_6619dd9
#define public_6619df1 _public_6619df1

PROC_DECLARE(0x6619d80, internal_6619d80, public_6619d80);
extern "C" NAKED register_t __cdecl internal_6619d80()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+8]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        cmp ebp, eax
        mov dword ptr ss : [esp+8], ecx
        mov ebx, ebp
        je public_6619df1
        push esi
        push edi
        jmp public_6619da0
        public_6619d98 : nop
        mov ebp, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6619da0 : nop
        mov eax, dword ptr ds : [ebx+8]
        push eax
        call public_6619d80
        mov eax, dword ptr ss : [ebp+0x24]
        mov ebx, dword ptr ds : [ebx]
        mov esi, dword ptr ss : [ebp+0x1C]
        lea edi, ss:[ebp+0x1C]
        test eax, eax
        je public_6619dd9
        public_6619db8 : nop
        mov ebp, dword ptr ds : [esi+0xC]
        push esi
        mov ecx, edi
        call public_6617220
        push esi
        call public_66281d0
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        test eax, eax
        mov esi, ebp
        jne public_6619db8
        mov ebp, dword ptr ss : [esp+0x18]
        public_6619dd9 : nop
        push ebp
        call public_66281d0
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ss : [esp+0x18], ebx
        cmp ebx, dword ptr ds : [ecx+8]
        jne public_6619d98
        pop edi
        pop esi
        public_6619df1 : nop
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6619d80)
    }
}

#undef public_6619d98
#undef public_6619da0
#undef public_6619db8
#undef public_6619dd9
#undef public_6619df1
