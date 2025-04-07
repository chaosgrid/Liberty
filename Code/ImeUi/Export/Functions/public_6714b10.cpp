#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6714b10);

#define public_6714b2e _public_6714b2e
#define public_6714b48 _public_6714b48
#define public_6714b53 _public_6714b53
#define public_6714b74 _public_6714b74

PROC_DECLARE(0x6714b10, internal_6714b10, public_6714b10);
extern "C" NAKED register_t __cdecl internal_6714b10()
{
    __asm
    {
        push esi
        push edi
/*FIXUP push offset public_671b7c0 @0x6714b12*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671b7c0
        call dword ptr ds : [public_671937c]
        mov edi, eax
        mov eax, dword ptr ds : [public_671cef0]
        xor esi, esi
        test eax, eax
        je public_6714b48
        test edi, edi
        jle public_6714b74
        public_6714b2e : nop
        mov ax, word ptr ds : [esi*2+public_671b7c0]
        push eax
        call dword ptr ds : [public_671cef0]
        add esp, 4
        inc esi
        cmp esi, edi
        jl public_6714b2e
        pop edi
        pop esi
        ret 
        public_6714b48 : nop
        test edi, edi
        jle public_6714b74
        push ebx
        mov ebx, dword ptr ds : [public_6719388]
        public_6714b53 : nop
        mov edx, dword ptr ds : [public_671cf98]
        xor ecx, ecx
        mov cx, word ptr ds : [esi*2+public_671b7c0]
        push 0
        push ecx
        push 0x102
        push edx
        call ebx
        inc esi
        cmp esi, edi
        jl public_6714b53
        pop ebx
        public_6714b74 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6714b10)
    }
}

#undef public_6714b2e
#undef public_6714b48
#undef public_6714b53
#undef public_6714b74
