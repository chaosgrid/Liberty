#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);

#define public_6ec9972 _public_6ec9972
#define public_6ec9984 _public_6ec9984
#define public_6ec99b1 _public_6ec99b1
#define public_6ec99db _public_6ec99db
#define public_6ec99f6 _public_6ec99f6
#define public_6ec9a16 _public_6ec9a16
#define public_6ec9a5a _public_6ec9a5a

PROC_DECLARE(0x6ec9940, internal_6ec9940, public_6ec9940);
extern "C" NAKED register_t __cdecl internal_6ec9940()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ds : [public_6fb306c]
        push edi
        mov ebx, ecx
        push 0
        mov ecx, ebp
        call esi
        test al, al
        mov edi, dword ptr ds : [public_6fb3048]
        jne public_6ec99b1
        push 0
        mov ecx, ebp
        call edi
        test eax, eax
        jne public_6ec9972
        mov dword ptr ds : [ebx+0x30], eax
        mov byte ptr ds : [ebx+0x34], al
        jmp public_6ec9984
        public_6ec9972 : nop
        push eax
        lea eax, ds:[ebx+0x34]
        push 0x20
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [ebx+0x30], eax
/*FIXUP public_6ec9984 : nop
        push offset public_6fb57a0 @0x6ec9984*/
  FIXUP public_6ec9984 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57a0
        push 0
        mov ecx, ebp
        call edi
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6ec99b1
        push 0
        mov ecx, ebp
        call edi
        push eax
        lea ecx, ds:[ebx+0x64]
        push ecx
        call dword ptr ds : [public_6fb33e8]
        add esp, 8
        public_6ec99b1 : nop
        push 1
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], 0
        call esi
        test al, al
        jne public_6ec9a5a
        push 0
        mov ecx, ebp
        call edi
        mov esi, eax
        test esi, esi
        jne public_6ec99db
        mov dword ptr ds : [ebx+0xC], eax
        mov byte ptr ds : [ebx+0x10], al
        jmp public_6ec9a16
        public_6ec99db : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea edx, ds:[ebx+0x10]
        jb public_6ec99f6
        mov eax, 0x1F
        public_6ec99f6 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ds : [public_6fb3048]
        mov byte ptr ds : [eax+ebx+0x10], 0
        mov dword ptr ds : [ebx+0xC], eax
/*FIXUP public_6ec9a16 : nop
        push offset public_6fb57a0 @0x6ec9a16*/
  FIXUP public_6ec9a16 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57a0
        push 1
        mov ecx, ebp
        call edi
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6ec9a5a
        push 1
        mov ecx, ebp
        call edi
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_6fb33e4]
        add esp, 8
        test eax, eax
        jne public_6ec9a5a
        lea ecx, ss:[esp+0x14]
        push ecx
        add ebx, 0x54
        push ebx
        call dword ptr ds : [public_6fb33e0]
        add esp, 8
        public_6ec9a5a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec9940)
    }
}

#undef public_6ec9972
#undef public_6ec9984
#undef public_6ec99b1
#undef public_6ec99db
#undef public_6ec99f6
#undef public_6ec9a16
#undef public_6ec9a5a
