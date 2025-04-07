#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67142e0);

#define public_67142f9 _public_67142f9
#define public_671430a _public_671430a
#define public_6714328 _public_6714328
#define public_671432c _public_671432c
#define public_6714354 _public_6714354

PROC_DECLARE(0x67142e0, internal_67142e0, public_67142e0);
extern "C" NAKED register_t __cdecl internal_67142e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        test eax, eax
        push edi
        je public_6714354
        mov esi, dword ptr ss : [esp+0xC]
        mov edi, dword ptr ds : [public_671710c]
        jbe public_671432c
        push ebp
        mov ebp, eax
        public_67142f9 : nop
        mov eax, dword ptr ds : [public_671cf8c]
        test eax, eax
        je public_671430a
        push esi
        call eax
        add esp, 4
        jmp public_6714328
        public_671430a : nop
        mov eax, dword ptr ds : [public_671cf98]
        push 0
        push esi
        push 0x100
        push eax
        mov byte ptr ds : [public_671cfb9], 1
        call edi
        mov byte ptr ds : [public_671cfb9], 0
        public_6714328 : nop
        dec ebp
        jne public_67142f9
        pop ebp
        public_671432c : nop
        mov eax, dword ptr ds : [public_671cf8c]
        test eax, eax
        jne public_6714354
        mov ecx, dword ptr ds : [public_671cf98]
        push 0
        push esi
        push 0x101
        push ecx
        mov byte ptr ds : [public_671cfb9], 1
        call edi
        mov byte ptr ds : [public_671cfb9], 0
        public_6714354 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x67142e0)
    }
}

#undef public_67142f9
#undef public_671430a
#undef public_6714328
#undef public_671432c
#undef public_6714354
