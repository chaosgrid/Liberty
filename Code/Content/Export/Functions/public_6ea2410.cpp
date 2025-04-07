#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea2410);
CLANG_FORWARD_PROC_SYMBOL(public_6eba430);
CLANG_FORWARD_PROC_SYMBOL(public_6f488b0);

#define public_6ea2483 _public_6ea2483
#define public_6ea24d0 _public_6ea24d0
#define public_6ea24f0 _public_6ea24f0
#define public_6ea250d _public_6ea250d
#define public_6ea2519 _public_6ea2519
#define public_6ea2525 _public_6ea2525

PROC_DECLARE(0x6ea2410, internal_6ea2410, public_6ea2410);
extern "C" NAKED register_t __cdecl internal_6ea2410()
{
    __asm
    {
        sub esp, 0x88
        push ebp
        push esi
        mov ebp, ecx
        push edi
        lea ecx, ss:[esp+0xC]
        mov byte ptr ss : [ebp+0x32C], 1
        call dword ptr ds : [public_6fb3030]
        mov ecx, dword ptr ss : [ebp+4]
        push 0
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        push 0
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6f488b0
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [ebp+0x2A4]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [ebp+0x2B8]
        push eax
        push 1
        call dword ptr ds : [edx]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6fb3a74
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x80
        mov byte ptr ds : [public_6fd1c78], 1
        mov byte ptr ss : [esp+0x14], 0
        jb public_6ea2483
        mov eax, 0x7F
        public_6ea2483 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_6fb3a74
        lea edi, ss:[esp+0x14]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x14], 0
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, ebp
        call public_6eba430
        mov esi, dword ptr ss : [esp+0x98]
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6ea2525
        mov edi, dword ptr ds : [public_6fb3020]
        lea ebx, ds:[ebx]
/*FIXUP public_6ea24d0 : nop
        push offset public_6fb3a64 @0x6ea24d0*/
  FIXUP public_6ea24d0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3a64
        mov ecx, esi
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6ea2519
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6ea2519
        lea ecx, ds:[ecx]
/*FIXUP public_6ea24f0 : nop
        push offset public_6fb3950 @0x6ea24f0*/
  FIXUP public_6ea24f0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3950
        mov ecx, esi
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6ea250d
        push 0
        mov ecx, esi
        call edi
        mov dword ptr ss : [ebp+0x2AC], eax
        public_6ea250d : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6ea24f0
        public_6ea2519 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6ea24d0
        public_6ea2525 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x88
        ret 4
        UNREACHABLE_TRAP(0x6ea2410)
    }
}

#undef public_6ea2483
#undef public_6ea24d0
#undef public_6ea24f0
#undef public_6ea250d
#undef public_6ea2519
#undef public_6ea2525
