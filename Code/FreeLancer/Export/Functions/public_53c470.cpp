#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0c49);

#define public_53c4cd _public_53c4cd
#define public_53c4d5 _public_53c4d5
#define public_53c4e0 _public_53c4e0
#define public_53c50f _public_53c50f
#define public_53c545 _public_53c545
#define public_53c550 _public_53c550

PROC_DECLARE(0x53c470, internal_53c470, public_53c470);
extern "C" NAKED register_t __cdecl internal_53c470()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0c49 @0x53c472*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0c49
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [edi]
        push 0
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        mov dword ptr ss : [esp+4], eax
        je public_53c550
        mov cl, byte ptr ss : [esp+0x2C]
        mov byte ptr ss : [esp+8], cl
        xor ecx, ecx
        push ebx
        push esi
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], ecx
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        mov dword ptr ss : [esp+0x28], ecx
        jne public_53c4cd
        xor ebx, ebx
        jmp public_53c4d5
        public_53c4cd : nop
        mov ebx, dword ptr ds : [edi+0x10]
        sub ebx, eax
        sar ebx, 2
        public_53c4d5 : nop
        xor esi, esi
        test ebx, ebx
        jle public_53c545
        nop 
        lea esp, ss:[esp]
        public_53c4e0 : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [eax+esi*4]
        push 0
        push edx
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_53c50f
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x34], eax
        lea eax, ss:[esp+0x34]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c6a48]
        public_53c50f : nop
        inc esi
        cmp esi, ebx
        jl public_53c4e0
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        je public_53c545
        mov eax, dword ptr ss : [esp+0x18]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        jbe public_53c545
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edx+4]
        lea ecx, ds:[edx+4]
        push 0
        lea edx, ss:[esp+0x14]
        push edx
        add edi, 4
        push edi
        call dword ptr ds : [eax+0x3C]
        mov ecx, dword ptr ss : [esp+0x14]
        public_53c545 : nop
        push ecx
        call public_5b7e1d
        add esp, 4
        pop esi
        pop ebx
        public_53c550 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x53c470)
    }
}

#undef public_53c4cd
#undef public_53c4d5
#undef public_53c4e0
#undef public_53c50f
#undef public_53c545
#undef public_53c550
