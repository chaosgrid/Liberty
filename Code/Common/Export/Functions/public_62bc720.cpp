#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628e250);
CLANG_FORWARD_PROC_SYMBOL(public_62bcc90);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63948fb);

#define public_62bc780 _public_62bc780
#define public_62bc782 _public_62bc782
#define public_62bc7f3 _public_62bc7f3
#define public_62bc81e _public_62bc81e

PROC_DECLARE(0x62bc720, internal_62bc720, public_62bc720);
extern "C" NAKED register_t __cdecl internal_62bc720()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63948fb @0x62bc722*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63948fb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        push edi
        push 0x10
        mov edi, ecx
        call public_6391d9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        test esi, esi
        mov dword ptr ss : [esp+0x1C], 0
        je public_62bc780
        lea ebx, ds:[esi+0xC]
        mov ecx, ebx
        call public_6333e40
        mov ecx, ebx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+4], 0x4B189680
        mov dword ptr ds : [esi+8], 0xBF800000
        call public_6333e40
        jmp public_62bc782
        public_62bc780 : nop
        xor esi, esi
        public_62bc782 : nop
        mov edx, dword ptr ds : [edi+0xC]
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ds:[edi+4]
        push 1
        push edx
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x18], esi
        call public_628e250
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax-4]
        push edx
        push esi
        call public_62bcc90
        mov bl, al
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x50]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_62bc7f3
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov edi, 0x100001
        call dword ptr ds : [edx+4]
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x170
/*FIXUP push offset public_639edec @0x62bc7e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639edec
/*FIXUP push offset public_639ed78 @0x62bc7e8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ed78
        push edi
        call dword ptr ds : [eax]
        add esp, 0x14
        public_62bc7f3 : nop
        test bl, bl
        jne public_62bc81e
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov edi, 0x100001
        call dword ptr ds : [edx+4]
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x176
/*FIXUP push offset public_639edec @0x62bc80e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639edec
/*FIXUP push offset public_639ed30 @0x62bc813*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ed30
        push edi
        call dword ptr ds : [eax]
        add esp, 0x14
        public_62bc81e : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x62bc720)
    }
}

#undef public_62bc780
#undef public_62bc782
#undef public_62bc7f3
#undef public_62bc81e
