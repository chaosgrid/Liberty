#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f02330);
CLANG_FORWARD_PROC_SYMBOL(public_6f027d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f029e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f02a50);
CLANG_FORWARD_PROC_SYMBOL(public_6f02b10);
CLANG_FORWARD_PROC_SYMBOL(public_6f031d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f03530);
CLANG_FORWARD_PROC_SYMBOL(public_6f03550);
CLANG_FORWARD_PROC_SYMBOL(public_6f03b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f24280);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9000);
CLANG_FORWARD_JUMP_SYMBOL(public_6facc20);

#define public_6f02395 _public_6f02395
#define public_6f023c8 _public_6f023c8
#define public_6f024c1 _public_6f024c1
#define public_6f024d4 _public_6f024d4
#define public_6f024ee _public_6f024ee
#define public_6f02557 _public_6f02557
#define public_6f02598 _public_6f02598
#define public_6f025a1 _public_6f025a1
#define public_6f025ad _public_6f025ad
#define public_6f025bf _public_6f025bf
#define public_6f025d4 _public_6f025d4

PROC_DECLARE(0x6f02330, internal_6f02330, public_6f02330);
extern "C" NAKED register_t __cdecl internal_6f02330()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6facc20 @0x6f02338*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6facc20
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x15B4
        mov dword ptr fs : [0], esp
        call public_6fa9000
        push ebx
        lea ecx, ss:[esp+0x50]
        call dword ptr ds : [public_6fb300c]
        mov ecx, dword ptr ss : [esp+0x15C8]
        lea eax, ss:[esp+0x50]
        push eax
        xor ebx, ebx
        push ecx
        mov dword ptr ss : [esp+0x15C8], ebx
        call public_6f24280
        add esp, 8
        test al, al
        je public_6f025d4
        lea ecx, ss:[esp+0x50]
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f025d4
        push ebp
        push esi
        push edi
/*FIXUP public_6f02395 : nop
        push offset public_6fb8020 @0x6f02395*/
  FIXUP public_6f02395 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8020
        lea ecx, ss:[esp+0x60]
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f025bf
        mov edx, dword ptr ds : [public_6fd04fc]
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x14], edx
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f025bf
        public_6f023c8 : nop
        mov esi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb8018 @0x6f023ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8018
        lea ecx, ss:[esp+0x60]
        call esi
        test al, al
        lea ecx, ss:[esp+0x5C]
        je public_6f024ee
        call dword ptr ds : [public_6fb3054]
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        call dword ptr ds : [public_6fb33b4]
        add esp, 8
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, offset public_6fd04f8
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [public_6fd04fc]
        mov dword ptr ss : [esp+0x14], eax
        jne public_6f025ad
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x20], al
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x40], ecx
        push edx
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x15D0], 1
        call public_6f029e0
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x58]
        push ecx
        mov ecx, offset public_6fd04f8
        mov byte ptr ss : [esp+0x15D4], 2
        call public_6f027d0
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x54]
        push eax
        push ecx
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x1C], edx
        mov byte ptr ss : [esp+0x15D4], 1
        call public_6f02a50
        mov edx, dword ptr ss : [esp+0x48]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ss : [esp+0x28]
        add esp, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebx
        mov byte ptr ss : [esp+0x15CC], bl
        mov edi, eax
        je public_6f024d4
        public_6f024c1 : nop
        push ebx
        mov ecx, esi
        call public_6f03b00
        add esi, 0x10
        cmp esi, edi
        jne public_6f024c1
        mov esi, dword ptr ss : [esp+0x24]
        public_6f024d4 : nop
        push esi
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        jmp public_6f025ad
/*FIXUP public_6f024ee : nop
        push offset public_6fb7fc8 @0x6f024ee*/
  FIXUP public_6f024ee : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7fc8
        call esi
        test al, al
        je public_6f025ad
        lea ecx, ss:[esp+0x5C]
        call dword ptr ds : [public_6fb3054]
        mov esi, eax
        mov al, byte ptr ss : [esp+0x13]
        push ebx
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x34], al
        call public_6f02b10
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x38]
        call public_6f03550
        test al, al
        je public_6f02557
        mov edi, dword ptr ss : [esp+0x34]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        push ebp
        lea ecx, ss:[esp+0x34]
        call public_6f03530
        public_6f02557 : nop
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x30]
        lea ecx, ds:[eax+0x10]
        mov eax, dword ptr ds : [ecx+8]
        push edx
        push 1
        push eax
        mov byte ptr ss : [esp+0x15D8], 3
        call public_6f031d0
        mov eax, dword ptr ss : [esp+0x34]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x15CC], bl
        je public_6f025a1
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f02598
        cmp cl, 0xFF
        je public_6f02598
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f025a1
        public_6f02598 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f025a1 : nop
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        public_6f025ad : nop
        lea ecx, ss:[esp+0x5C]
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f023c8
        public_6f025bf : nop
        lea ecx, ss:[esp+0x5C]
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f02395
        pop edi
        pop esi
        pop ebp
        public_6f025d4 : nop
        mov ebx, 4
        lea eax, ss:[esp+0x1478]
        mov dword ptr ss : [esp+0x15C0], ebx
        mov dword ptr ss : [esp+0xC], eax
        lea ecx, ss:[esp+0x1478]
        mov byte ptr ss : [esp+0x15C0], 5
        call dword ptr ds : [public_6fb304c]
        push 1
        lea ecx, ss:[esp+0x147C]
        mov byte ptr ss : [esp+0x15C4], bl
        call dword ptr ds : [public_6fb32f8]
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x15C0], 6
        call dword ptr ds : [public_6fb304c]
        push 1
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x15C4], 0xFFFFFFFF
        call dword ptr ds : [public_6fb32f8]
        mov ecx, dword ptr ss : [esp+0x15B8]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x15C0
        ret 
        UNREACHABLE_TRAP(0x6f02330)
    }
}

#undef public_6f02395
#undef public_6f023c8
#undef public_6f024c1
#undef public_6f024d4
#undef public_6f024ee
#undef public_6f02557
#undef public_6f02598
#undef public_6f025a1
#undef public_6f025ad
#undef public_6f025bf
#undef public_6f025d4
