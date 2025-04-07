#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce6870);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60e19);

#define public_6cfeb65 _public_6cfeb65
#define public_6cfeb74 _public_6cfeb74
#define public_6cfebb7 _public_6cfebb7
#define public_6cfebd3 _public_6cfebd3
#define public_6cfebe6 _public_6cfebe6
#define public_6cfebef _public_6cfebef
#define public_6cfec68 _public_6cfec68
#define public_6cfec6a _public_6cfec6a
#define public_6cfec70 _public_6cfec70
#define public_6cfecb0 _public_6cfecb0
#define public_6cfeccc _public_6cfeccc
#define public_6cfecd5 _public_6cfecd5
#define public_6cfecf0 _public_6cfecf0
#define public_6cfecfc _public_6cfecfc
#define public_6cfecfe _public_6cfecfe
#define public_6cfed20 _public_6cfed20
#define public_6cfed2c _public_6cfed2c

PROC_DECLARE(0x6cfeae0, internal_6cfeae0, public_6cfeae0);
extern "C" NAKED register_t __cdecl internal_6cfeae0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d60e19 @0x6cfeae8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60e19
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x18]
        test al, al
        jne public_6cfecd5
        mov ecx, dword ptr ds : [public_6d8d8a8]
        mov eax, dword ptr ds : [edi+0x28]
        push ebp
        push ecx
        push eax
        call dword ptr ds : [public_6d64a48]
        add esp, 8
        test eax, eax
        jne public_6cfebef
        mov ecx, dword ptr ds : [edi+0x24]
        call public_6ce6870
        push 0x1FE0
        lea ecx, ss:[esp+0x18]
        mov esi, eax
        mov dword ptr ss : [esp+0x14], 0
        call dword ptr ds : [public_6d64204]
        mov ebp, dword ptr ds : [public_6d64200]
        lea edx, ss:[esp+0x14]
        add esi, 0xE4
        push edx
        mov ecx, esi
        call ebp
        test eax, eax
        je public_6cfebe6
        public_6cfeb65 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        test al, al
        jne public_6cfeb74
        inc dword ptr ss : [esp+0x10]
        public_6cfeb74 : nop
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call ebp
        test eax, eax
        jne public_6cfeb65
        mov ebx, dword ptr ss : [esp+0x10]
        test ebx, ebx
        je public_6cfebe6
        call dword ptr ds : [public_6d64c7c]
        imul eax, ebx
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov ebx, eax
        lea ecx, ss:[esp+0x14]
        xor eax, eax
        push ecx
        mov ecx, esi
        sar ebx, 0xF
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x20], eax
        call ebp
        test eax, eax
        je public_6cfebef
        public_6cfebb7 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        inc ecx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6cfebd3
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call ebp
        test eax, eax
        jne public_6cfebb7
        jmp public_6cfebef
        public_6cfebd3 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x60]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edi+0x28], edx
        jmp public_6cfebef
        public_6cfebe6 : nop
        lea ecx, ds:[edi+0x28]
        call dword ptr ds : [public_6d6453c]
        public_6cfebef : nop
        mov eax, dword ptr ds : [edi+0x28]
        cmp byte ptr ds : [eax], 0
        pop ebp
        je public_6cfecd5
        mov cl, byte ptr ss : [esp+0x3C]
        xor esi, esi
        push esi
        mov byte ptr ss : [esp+0x14], cl
        push esi
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d641fc]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], esi
        mov byte ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x28], esi
        mov eax, dword ptr ds : [edi+0x24]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x20], 0x15
        mov dword ptr ss : [esp+0x24], ecx
        je public_6cfec70
        mov eax, dword ptr ds : [eax+0x28]
        cmp eax, esi
        je public_6cfec70
        push 0x7F0000
        push ecx
        mov ecx, eax
        call public_6d0c8d0
        cmp eax, esi
        je public_6cfec70
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, esi
        je public_6cfec68
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6cfec6a
        public_6cfec68 : nop
        xor eax, eax
        public_6cfec6a : nop
        mov esi, dword ptr ds : [eax+0xB4]
        public_6cfec70 : nop
        mov eax, dword ptr ds : [edi+0x28]
        mov ecx, dword ptr ds : [edi+0x24]
        mov dword ptr ss : [esp+0x28], esi
        mov edx, dword ptr ds : [ecx]
        lea esi, ss:[esp+0x10]
        push esi
        mov esi, dword ptr ds : [edi+0x2C]
        push esi
        push eax
        call dword ptr ds : [edx+0x1D0]
        mov ecx, dword ptr ds : [edi+0x24]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x10]
        push edx
        call dword ptr ds : [eax+0x188]
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        mov ebx, eax
        je public_6cfeccc
        public_6cfecb0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d641e8]
        cmp esi, ebx
        jne public_6cfecb0
        mov eax, dword ptr ss : [esp+0x14]
        public_6cfeccc : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6cfecd5 : nop
        mov edx, dword ptr ss : [esp+0x40]
        lea esi, ds:[edi+0x14]
        mov byte ptr ds : [edi+0x10], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x3C], edx
        je public_6cfecfc
        mov edi, edi
        public_6cfecf0 : nop
        cmp word ptr ds : [eax], dx
        je public_6cfecfe
        add eax, 2
        cmp eax, ecx
        jne public_6cfecf0
        public_6cfecfc : nop
        mov eax, ecx
        public_6cfecfe : nop
        cmp eax, ecx
        jne public_6cfed2c
        lea edx, ss:[esp+0x3C]
        push edx
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6d6456c]
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_6cfed2c
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edi, edi
        public_6cfed20 : nop
        cmp word ptr ds : [eax], cx
        je public_6cfed2c
        add eax, 2
        cmp eax, esi
        jne public_6cfed20
        public_6cfed2c : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 8
        UNREACHABLE_TRAP(0x6cfeae0)
    }
}

#undef public_6cfeb65
#undef public_6cfeb74
#undef public_6cfebb7
#undef public_6cfebd3
#undef public_6cfebe6
#undef public_6cfebef
#undef public_6cfec68
#undef public_6cfec6a
#undef public_6cfec70
#undef public_6cfecb0
#undef public_6cfeccc
#undef public_6cfecd5
#undef public_6cfecf0
#undef public_6cfecfc
#undef public_6cfecfe
#undef public_6cfed20
#undef public_6cfed2c
