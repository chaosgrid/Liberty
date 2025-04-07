#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6280b40);
CLANG_FORWARD_PROC_SYMBOL(public_62dd3d0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6395318);

#define public_62dd3fe _public_62dd3fe
#define public_62dd409 _public_62dd409
#define public_62dd442 _public_62dd442
#define public_62dd482 _public_62dd482
#define public_62dd4ea _public_62dd4ea
#define public_62dd4ec _public_62dd4ec
#define public_62dd4fa _public_62dd4fa
#define public_62dd562 _public_62dd562

PROC_DECLARE(0x62dd3d0, internal_62dd3d0, public_62dd3d0);
extern "C" NAKED register_t __cdecl internal_62dd3d0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6395318 @0x62dd3d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395318
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        sub esp, 0x3C
        test al, 2
        push ebx
        push esi
        mov esi, ecx
        mov cl, byte ptr ss : [esp+0x54]
        je public_62dd3fe
        mov byte ptr ds : [esi+0x254], cl
        public_62dd3fe : nop
        and eax, 1
        je public_62dd409
        mov byte ptr ds : [esi+0x24C], cl
        public_62dd409 : nop
        xor ebx, ebx
        cmp cl, bl
        jne public_62dd562
        cmp eax, ebx
        je public_62dd442
        test byte ptr ds : [esi+0x214], 1
        je public_62dd442
        mov eax, dword ptr ds : [esi+0x1C0]
        mov dword ptr ss : [esp+8], ebx
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov eax, dword ptr ds : [eax+8]
        lea ecx, ss:[esp+8]
        push ecx
        lea ecx, ds:[eax+0x18]
        call public_62e8ce0
        public_62dd442 : nop
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x54], edx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        push ebx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x50], ebx
        call public_6280b40
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x4C], 1
        mov dword ptr ss : [esp+0x14], ebx
        je public_62dd482
        push ebx
        lea ecx, ss:[esp+0x1C]
        call public_6341610
        mov eax, dword ptr ss : [esp+0x18]
        public_62dd482 : nop
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov byte ptr ss : [esp+0x38], bl
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        mov dword ptr ss : [esp+0x40], ebx
        cmp eax, ebx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x214], ecx
        mov dword ptr ss : [esp+0x4C], 2
        lea ecx, ds:[esi+0x218]
        je public_62dd4ea
        lea edx, ds:[eax-8]
        cmp edx, ebx
        je public_62dd4ea
        add edx, 8
        jmp public_62dd4ec
        public_62dd4ea : nop
        xor edx, edx
        public_62dd4ec : nop
        cmp edx, dword ptr ds : [ecx]
        je public_62dd4fa
        push edx
        call public_6341610
        mov eax, dword ptr ss : [esp+0x18]
        public_62dd4fa : nop
        cmp eax, ebx
        mov ecx, dword ptr ss : [esp+0x20]
        lea edx, ds:[esi+0x220]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        lea edx, ds:[esi+0x22C]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edx+8], ecx
        mov dl, byte ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov byte ptr ds : [esi+0x238], dl
        mov edx, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [esi+0x23C], ecx
        mov dword ptr ds : [esi+0x240], edx
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        je public_62dd562
        push ebx
        lea ecx, ss:[esp+0x1C]
        call public_6341610
        public_62dd562 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 8
        UNREACHABLE_TRAP(0x62dd3d0)
    }
}

#undef public_62dd3fe
#undef public_62dd409
#undef public_62dd442
#undef public_62dd482
#undef public_62dd4ea
#undef public_62dd4ec
#undef public_62dd4fa
#undef public_62dd562
