#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31470);

#define public_6f314a3 _public_6f314a3
#define public_6f314d6 _public_6f314d6
#define public_6f31525 _public_6f31525
#define public_6f3155b _public_6f3155b
#define public_6f3157e _public_6f3157e
#define public_6f31596 _public_6f31596
#define public_6f315b3 _public_6f315b3
#define public_6f315c7 _public_6f315c7
#define public_6f315e9 _public_6f315e9
#define public_6f31609 _public_6f31609
#define public_6f31621 _public_6f31621
#define public_6f31633 _public_6f31633

PROC_DECLARE(0x6f31470, internal_6f31470, public_6f31470);
extern "C" NAKED register_t __cdecl internal_6f31470()
{
    __asm
    {
        sub esp, 0x54
        push ebx
        mov ebx, dword ptr ss : [esp+0x60]
        push ebp
        mov ebp, dword ptr ss : [esp+0x68]
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x44], 0
        mov dword ptr ss : [esp+8], 0
        mov byte ptr ss : [esp+0xC], 0
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f31633
        push esi
        push edi
        public_6f314a3 : nop
        mov esi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb445c @0x6f314a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, ebp
        call esi
        test al, al
        mov ecx, ebp
        je public_6f314d6
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [ecx], eax
        add esp, 4
        mov dword ptr ds : [ebx+0x48], eax
        jmp public_6f31621
/*FIXUP public_6f314d6 : nop
        push offset public_6fb93fc @0x6f314d6*/
  FIXUP public_6f314d6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb93fc
        call esi
        test al, al
        mov ecx, ebp
        je public_6f3155b
        mov edi, dword ptr ds : [public_6fb3048]
        push 1
        push 0
        call edi
        mov esi, dword ptr ds : [public_6fb33b0]
        push eax
        call esi
        add esp, 8
        push 0
        push 1
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x10], eax
        call edi
        push eax
        call esi
        add esp, 8
        mov esi, 2
        push esi
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x14], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f31621
        public_6f31525 : nop
        mov eax, esi
        push eax
        mov ecx, ebp
        inc esi
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb33ac]
        mov edx, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+edx*4+0x20], eax
        mov edi, dword ptr ds : [ebx+0x40]
        add esp, 4
        inc edi
        push esi
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x40], edi
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6f31525
        jmp public_6f31621
/*FIXUP public_6f3155b : nop
        push offset public_6fb8018 @0x6f3155b*/
  FIXUP public_6f3155b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8018
        call esi
        test al, al
        mov ecx, ebp
        je public_6f315c7
        call dword ptr ds : [public_6fb3054]
        mov esi, eax
        test esi, esi
        jne public_6f3157e
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ss : [esp+0x14], al
        jmp public_6f315b3
        public_6f3157e : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x50
        jb public_6f31596
        mov eax, 0x4F
        public_6f31596 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x14]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x14], 0
        mov dword ptr ss : [esp+0x10], eax
        public_6f315b3 : nop
        lea eax, ss:[esp+0x14]
        push eax
        lea eax, ds:[ebx+0x44]
        push eax
        call dword ptr ds : [public_6fb33b4]
        add esp, 8
        jmp public_6f31621
/*FIXUP public_6f315c7 : nop
        push offset public_6fb93ec @0x6f315c7*/
  FIXUP public_6f315c7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb93ec
        call esi
        test al, al
        mov ecx, ebp
        je public_6f315e9
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [ebx+8], eax
        jmp public_6f31621
/*FIXUP public_6f315e9 : nop
        push offset public_6fb93e0 @0x6f315e9*/
  FIXUP public_6f315e9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb93e0
        call esi
        test al, al
        mov ecx, ebp
        je public_6f31609
        call dword ptr ds : [public_6fb3054]
        push eax
        push ebx
        call dword ptr ds : [public_6fb361c]
        add esp, 8
        jmp public_6f31621
/*FIXUP public_6f31609 : nop
        push offset public_6fb93d0 @0x6f31609*/
  FIXUP public_6f31609 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb93d0
        call esi
        test al, al
        je public_6f31621
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [ebx+4], eax
        public_6f31621 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f314a3
        pop edi
        pop esi
        public_6f31633 : nop
        mov ecx, dword ptr ss : [esp+0x60]
        call dword ptr ds : [public_6fb3050]
        neg al
        pop ebp
        pop ebx
        sbb eax, eax
        inc eax
        add esp, 0x54
        ret 
        UNREACHABLE_TRAP(0x6f31470)
    }
}

#undef public_6f314a3
#undef public_6f314d6
#undef public_6f31525
#undef public_6f3155b
#undef public_6f3157e
#undef public_6f31596
#undef public_6f315b3
#undef public_6f315c7
#undef public_6f315e9
#undef public_6f31609
#undef public_6f31621
#undef public_6f31633
