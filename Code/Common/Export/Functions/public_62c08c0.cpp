#include "Common-PCH.h"


#define public_62c08e0 _public_62c08e0
#define public_62c08ee _public_62c08ee
#define public_62c0916 _public_62c0916
#define public_62c0924 _public_62c0924
#define public_62c093e _public_62c093e
#define public_62c094a _public_62c094a
#define public_62c0998 _public_62c0998
#define public_62c09e0 _public_62c09e0
#define public_62c0a4b _public_62c0a4b
#define public_62c0a90 _public_62c0a90

PROC_DECLARE(0x62c08c0, internal_62c08c0, public_62c08c0);
extern "C" NAKED register_t __cdecl internal_62c08c0()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        push esi
        push edi
        je public_62c08e0
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_62c08ee
        public_62c08e0 : nop
        pop edi
        pop esi
        mov eax, 0xFFFFFFFB
        pop ebx
        add esp, 0x40
        ret 0x18
        public_62c08ee : nop
        mov edx, dword ptr ds : [eax+0x88]
        mov eax, dword ptr ss : [esp+0x50]
        cmp eax, 0xFFFFFFFF
        je public_62c0916
        mov esi, dword ptr ds : [edx+0x88]
        test esi, esi
        je public_62c0916
        mov ecx, dword ptr ds : [edx+0x8C]
        sub ecx, esi
        sar ecx, 4
        cmp eax, ecx
        jb public_62c0924
        public_62c0916 : nop
        pop edi
        pop esi
        mov eax, 0xFFFFFFFC
        pop ebx
        add esp, 0x40
        ret 0x18
        public_62c0924 : nop
        mov esi, dword ptr ds : [edx+0x88]
        shl eax, 4
        add eax, esi
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x54]
        test eax, eax
        je public_62c093e
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [eax], edx
        public_62c093e : nop
        mov eax, dword ptr ss : [esp+0x64]
        test eax, eax
        je public_62c094a
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        public_62c094a : nop
        mov esi, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ebx]
        push esi
        lea ecx, ds:[esi+0x24]
        push ecx
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0xC0]
        test eax, eax
        je public_62c0998
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639f398 @0x62c096b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f398
        push 0x4F4
/*FIXUP push offset public_639f36c @0x62c0975*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f36c
        mov eax, 0x100002
/*FIXUP push offset public_639f350 @0x62c097f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f350
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        mov eax, 0xFFFFFFFB
        pop ebx
        add esp, 0x40
        ret 0x18
        public_62c0998 : nop
        mov eax, dword ptr ds : [edi+4]
/*FIXUP push offset public_639f344 @0x62c099b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f344
        push eax
        call dword ptr ds : [public_63991ec]
        add esp, 8
        test eax, eax
        jne public_62c09e0
/*FIXUP push offset public_639f398 @0x62c09ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f398
        push 0x4FC
/*FIXUP push offset public_639f36c @0x62c09b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f36c
        mov eax, 0x100002
/*FIXUP push offset public_639f350 @0x62c09c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f350
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        pop esi
        mov eax, 0xFFFFFFFB
        pop ebx
        add esp, 0x40
        ret 0x18
        public_62c09e0 : nop
        mov edx, dword ptr ds : [edi+4]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        movsx eax, byte ptr ds : [ecx+edx-2]
        dec ecx
        push ebp
        sub eax, 0x61
        lea ebp, ds:[eax+0x61]
        push ebp
/*FIXUP push offset public_639f338 @0x62c09fc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f338
        lea ecx, ss:[esp+0x18]
/*FIXUP push offset public_639f330 @0x62c0a05*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f330
        push ecx
        mov dword ptr ss : [esp+0x64], 0
        call dword ptr ds : [public_639931c]
        mov edi, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ds : [ebx]
        add esp, 0x10
        push edi
        lea eax, ds:[edi+0x24]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [edx+0xC0]
        test eax, eax
        je public_62c0a4b
        mov ecx, 0xC
        rep movsd
        mov esi, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFE
        public_62c0a4b : nop
        push ebp
/*FIXUP push offset public_639f338 @0x62c0a4c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f338
        lea edx, ss:[esp+0x18]
/*FIXUP push offset public_639f328 @0x62c0a55*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f328
        push edx
        call dword ptr ds : [public_639931c]
        mov edi, dword ptr ss : [esp+0x74]
        mov eax, dword ptr ds : [ebx]
        add esp, 0x10
        push edi
        lea ecx, ds:[edi+0x24]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        call dword ptr ds : [eax+0xC0]
        test eax, eax
        pop ebp
        je public_62c0a90
        mov ecx, 0xC
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFE
        rep movsd
        public_62c0a90 : nop
        mov eax, dword ptr ss : [esp+0x50]
        pop edi
        pop esi
        pop ebx
        add esp, 0x40
        ret 0x18
        UNREACHABLE_TRAP(0x62c08c0)
    }
}

#undef public_62c08e0
#undef public_62c08ee
#undef public_62c0916
#undef public_62c0924
#undef public_62c093e
#undef public_62c094a
#undef public_62c0998
#undef public_62c09e0
#undef public_62c0a4b
#undef public_62c0a90
