#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_62f9700);
CLANG_FORWARD_PROC_SYMBOL(public_62fba70);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6333ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_6333e50);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62f973e _public_62f973e
#define public_62f9796 _public_62f9796
#define public_62f97d1 _public_62f97d1
#define public_62f97da _public_62f97da
#define public_62f9807 _public_62f9807
#define public_62f982d _public_62f982d
#define public_62f9873 _public_62f9873
#define public_62f98c9 _public_62f98c9
#define public_62f9904 _public_62f9904

PROC_DECLARE(0x62f9700, internal_62f9700, public_62f9700);
extern "C" NAKED register_t __cdecl internal_62f9700()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
/*FIXUP push offset public_63a1f04 @0x62f970a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1f04
        mov ecx, esi
        xor bl, bl
        call public_6310410
        test al, al
        je public_62f973e
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        mov bl, 1
        je public_62f982d
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx], 0
        jmp public_62f9807
/*FIXUP public_62f973e : nop
        push offset public_63a1efc @0x62f973e*/
  FIXUP public_62f973e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1efc
        mov ecx, esi
        call public_6310410
        test al, al
        je public_62f97da
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        mov bl, 1
        je public_62f9796
        mov eax, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+0xC]
        call public_6333e50
        test al, al
        je public_62f9796
        mov ecx, dword ptr ds : [edi+4]
        mov edi, dword ptr ds : [ecx+4]
        mov ecx, esi
        add edi, 8
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 8
        ret 
        public_62f9796 : nop
        lea ecx, ss:[esp+0xC]
        call public_6333e30
        lea ecx, ss:[esp+0x10]
        call public_6333e40
        mov ecx, esi
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edi+4]
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        call public_62fba70
        public_62f97d1 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 8
        ret 
/*FIXUP public_62f97da : nop
        push offset public_63a1eec @0x62f97da*/
  FIXUP public_62f97da : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1eec
        mov ecx, esi
        call public_6310410
        test al, al
        je public_62f9873
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        mov bl, 1
        je public_62f982d
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+8]
        cmp byte ptr ds : [eax], 0
        public_62f9807 : nop
        jne public_62f982d
        mov ecx, esi
        call public_6310b70
        push 0
        push eax
        call public_6333ca0
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ecx+4]
        add esp, 8
        pop edi
        mov dword ptr ds : [edx+8], eax
        pop esi
        mov al, bl
        pop ebx
        add esp, 8
        ret 
        public_62f982d : nop
        lea ecx, ss:[esp+0xC]
        call public_6333e30
        lea ecx, ss:[esp+0x10]
        call public_6333e40
        mov ecx, esi
        call public_6310b70
        push 0
        push eax
        call public_6333ca0
        add esp, 8
        lea ecx, ss:[esp+0xC]
        push ecx
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edi+4]
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, edi
        call public_62fba70
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 8
        ret 
/*FIXUP public_62f9873 : nop
        push offset public_63a1edc @0x62f9873*/
  FIXUP public_62f9873 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1edc
        mov ecx, esi
        call public_6310410
        test al, al
        je public_62f97d1
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        je public_62f98c9
        mov eax, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+0xC]
        call public_6333e50
        test al, al
        je public_62f98c9
        mov ecx, dword ptr ds : [edi+4]
        mov edi, dword ptr ds : [ecx+4]
        mov ecx, esi
        add edi, 8
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 8
        ret 
        public_62f98c9 : nop
        lea ecx, ss:[esp+0xC]
        call public_6333e30
        lea ecx, ss:[esp+0x10]
        call public_6333e40
        mov ecx, esi
        call public_6310b70
        push eax
        call public_630d3f0
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x14], eax
        mov ebx, dword ptr ds : [esi+4]
        push 0x10
        call public_6391d9c
        add esp, 8
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_62f9904
        mov ebx, eax
        public_62f9904 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_62bee40
        mov eax, dword ptr ds : [edi+8]
        add esp, 8
        inc eax
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62f9700)
    }
}

#undef public_62f973e
#undef public_62f9796
#undef public_62f97d1
#undef public_62f97da
#undef public_62f9807
#undef public_62f982d
#undef public_62f9873
#undef public_62f98c9
#undef public_62f9904
