#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e9c0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_636ee40);
CLANG_FORWARD_PROC_SYMBOL(public_636ef40);
CLANG_FORWARD_PROC_SYMBOL(public_636efc0);
CLANG_FORWARD_PROC_SYMBOL(public_63703c0);
CLANG_FORWARD_PROC_SYMBOL(public_6372060);
CLANG_FORWARD_PROC_SYMBOL(public_6373d60);

#define public_63720de _public_63720de
#define public_6372151 _public_6372151
#define public_637215e _public_637215e
#define public_6372163 _public_6372163
#define public_6372173 _public_6372173
#define public_6372187 _public_6372187
#define public_637218e _public_637218e
#define public_63721a7 _public_63721a7
#define public_63721d6 _public_63721d6

PROC_DECLARE(0x6372060, internal_6372060, public_6372060);
extern "C" NAKED register_t __cdecl internal_6372060()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [public_658b24c]
        push ebx
        push ebp
        push esi
        inc eax
        push edi
        push eax
        mov dword ptr ss : [esp+0x14], 1
        call public_636ec70
        mov dword ptr ss : [esp+0x1C], eax
        call public_63703c0
        xor edi, edi
        push edi
        mov dword ptr ds : [public_658b814], eax
        mov dword ptr ds : [public_658b81c], eax
        mov dword ptr ds : [public_658b810], eax
        mov dword ptr ds : [public_658b848], edi
        mov dword ptr ds : [public_658b844], edi
        call public_6373d60
        mov dword ptr ds : [public_658b83c], eax
        mov dword ptr ds : [public_658b840], eax
        mov dword ptr ds : [public_658b838], eax
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 8
        cmp eax, edi
        je public_6372151
        mov ebp, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push eax
        call public_636ec10
        mov ebx, eax
        add esp, 4
        cmp ebx, edi
        jle public_6372151
        mov dword ptr ss : [esp+0x14], esi
        public_63720de : nop
        call public_63703c0
        mov ecx, dword ptr ss : [esp+0x20]
        push 0
        push edi
        push ebx
        push ecx
        mov esi, eax
        call public_636e9c0
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0x34], eax
        mov eax, dword ptr ds : [esi+0x50]
        and edx, 1
        shl edx, 0xB
        and eax, 0xFFFFF7FF
        or edx, eax
        push esi
        mov dword ptr ds : [esi+0x50], edx
        call public_636ef40
        mov ecx, dword ptr ds : [esi+0x50]
        or ecx, 0x200
        push ebp
        mov dword ptr ds : [esi+0x50], ecx
        call public_636efc0
        lea ecx, ss:[esp+0x30]
        push esi
        push ecx
        call public_636e1b0
        mov esi, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        mov ebp, dword ptr ds : [eax+4]
        xor esi, 1
        add esp, 0x20
        add eax, 4
        inc edi
        cmp edi, ebx
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], eax
        jl public_63720de
        public_6372151 : nop
        mov eax, dword ptr ds : [public_658b81c]
        mov esi, eax
        test esi, esi
        je public_63721a7
        jmp public_6372163
        public_637215e : nop
        mov eax, dword ptr ds : [public_658b81c]
        public_6372163 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_63721a7
        test eax, eax
        je public_637218e
        mov ecx, 4
        public_6372173 : nop
        mov edx, dword ptr ds : [eax+0x30]
        test edx, edx
        je public_637218e
        cmp eax, esi
        je public_6372187
        mov edx, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [edx+ecx], eax
        add ecx, 4
        public_6372187 : nop
        mov eax, dword ptr ds : [eax+0x30]
        test eax, eax
        jne public_6372173
        public_637218e : nop
        mov eax, dword ptr ds : [public_658b24c]
        mov ecx, dword ptr ds : [esi+0x3C]
        push eax
        push ecx
        call public_636ee40
        mov esi, dword ptr ds : [esi+0x30]
        add esp, 8
        test esi, esi
        jne public_637215e
        public_63721a7 : nop
        lea edx, ss:[esp+0x18]
        push edx
        call public_636ecc0
        mov eax, dword ptr ds : [public_658b078]
        add esp, 4
        cmp eax, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        jl public_63721d6
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f0504 @0x63721c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0504
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_63721d6 : nop
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6372060)
    }
}

#undef public_63720de
#undef public_6372151
#undef public_637215e
#undef public_6372163
#undef public_6372173
#undef public_6372187
#undef public_637218e
#undef public_63721a7
#undef public_63721d6
