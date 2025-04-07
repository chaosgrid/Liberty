#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_63231f0);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);

#define public_631ef16 _public_631ef16
#define public_631ef43 _public_631ef43
#define public_631ef6c _public_631ef6c
#define public_631ef74 _public_631ef74
#define public_631efbd _public_631efbd
#define public_631efd6 _public_631efd6

PROC_DECLARE(0x631eef0, internal_631eef0, public_631eef0);
extern "C" NAKED register_t __cdecl internal_631eef0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x114
        mov ecx, dword ptr ds : [public_64018f0]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        push ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], eax
        je public_631efd6
        mov esi, dword ptr ss : [ebp+8]
        public_631ef16 : nop
        lea edi, ds:[eax+0x10]
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_63a3d00 @0x631ef1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3d00
        mov ecx, esi
        call dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[edi+4]
        push eax
/*FIXUP push offset public_63994e8 @0x631ef2b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994e8
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [edi+0x24]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], eax
        cmp eax, dword ptr ds : [edi+0x24]
        je public_631efbd
        public_631ef43 : nop
        lea ebx, ds:[eax+0xC]
        push ebx
        mov ecx, offset public_64018ec
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_64018f0]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        je public_631ef6c
        mov edx, dword ptr ds : [ebx]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_631ef6c
        lea eax, ss:[esp+0x18]
        jmp public_631ef74
        public_631ef6c : nop
        mov dword ptr ss : [esp+0x1C], ecx
        lea eax, ss:[esp+0x1C]
        public_631ef74 : nop
        mov eax, dword ptr ds : [eax]
        add eax, 0x14
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+0x10]
        sub esp, 8
        fstp qword ptr ss : [esp]
        lea ecx, ss:[esp+0x2C]
/*FIXUP push offset public_63a3d0c @0x631ef8b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3d0c
        push ecx
        call dword ptr ds : [public_639931c]
        mov edx, dword ptr ds : [esi]
        add esp, 0x14
        lea eax, ss:[esp+0x20]
        push eax
/*FIXUP push offset public_63a3d08 @0x631efa1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3d08
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        lea ecx, ss:[esp+0x10]
        call public_63429f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [edi+0x24]
        jne public_631ef43
        public_631efbd : nop
        lea ecx, ss:[esp+0x14]
        call public_63231f0
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [public_64018f0]
        jne public_631ef16
        public_631efd6 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x631eef0)
    }
}

#undef public_631ef16
#undef public_631ef43
#undef public_631ef6c
#undef public_631ef74
#undef public_631efbd
#undef public_631efd6
