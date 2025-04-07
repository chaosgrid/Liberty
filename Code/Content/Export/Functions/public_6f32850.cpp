#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1f560);
CLANG_FORWARD_PROC_SYMBOL(public_6f1f940);
CLANG_FORWARD_PROC_SYMBOL(public_6f21650);
CLANG_FORWARD_PROC_SYMBOL(public_6f22a00);
CLANG_FORWARD_PROC_SYMBOL(public_6f32850);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f32885 _public_6f32885
#define public_6f328b7 _public_6f328b7
#define public_6f328d9 _public_6f328d9
#define public_6f328e0 _public_6f328e0
#define public_6f32903 _public_6f32903

PROC_DECLARE(0x6f32850, internal_6f32850, public_6f32850);
extern "C" NAKED register_t __cdecl internal_6f32850()
{
    __asm
    {
        sub esp, 8
        mov ecx, dword ptr ds : [public_6fd0834]
        mov edx, dword ptr ds : [public_6fd0840]
        test edx, edx
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], eax
        je public_6f328d9
        mov edx, eax
        cmp eax, edx
        jne public_6f328d9
        cmp edi, ecx
        jne public_6f328d9
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_6fd0838]
        cmp edi, eax
        mov esi, edi
        je public_6f328b7
        public_6f32885 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_6fd0830
        call public_6f1f940
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6f22a00
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [public_6fd0838]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6f32885
        mov ecx, dword ptr ds : [public_6fd0834]
        public_6f328b7 : nop
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_6fd0834]
        mov dword ptr ds : [public_6fd0840], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_6fd0834]
        pop edi
        mov dword ptr ds : [eax+8], eax
        pop esi
        add esp, 8
        ret 
        public_6f328d9 : nop
        cmp eax, edi
        je public_6f32903
        lea ecx, ds:[ecx]
        public_6f328e0 : nop
        lea ecx, ss:[esp+8]
        mov esi, eax
        call public_6f21650
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_6fd0830
        call public_6f1f560
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        jne public_6f328e0
        public_6f32903 : nop
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f32850)
    }
}

#undef public_6f32885
#undef public_6f328b7
#undef public_6f328d9
#undef public_6f328e0
#undef public_6f32903
