#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6270090);
CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62728a0);
CLANG_FORWARD_PROC_SYMBOL(public_632ca20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63927ca);

#define public_62700d6 _public_62700d6
#define public_62700fe _public_62700fe
#define public_6270114 _public_6270114
#define public_627013c _public_627013c
#define public_6270156 _public_6270156
#define public_627017e _public_627017e
#define public_62701e6 _public_62701e6
#define public_627020a _public_627020a

PROC_DECLARE(0x6270090, internal_6270090, public_6270090);
extern "C" NAKED register_t __cdecl internal_6270090()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63927ca @0x6270092*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63927ca
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ds : [ecx], offset public_63993f8
        mov edi, dword ptr ds : [ecx+0x98]
        mov eax, dword ptr ds : [edi]
        lea ebp, ds:[ecx+0x94]
        xor ebx, ebx
        cmp eax, edi
        mov dword ptr ss : [esp+0x2C], 2
        mov dword ptr ss : [esp+0x10], eax
        je public_62700fe
        public_62700d6 : nop
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_632ca20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, ebp
        call public_6271cc0
        cmp dword ptr ss : [esp+0x10], edi
        jne public_62700d6
        mov ecx, dword ptr ss : [esp+0x14]
        public_62700fe : nop
        mov esi, dword ptr ds : [ecx+0xA4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        lea edi, ds:[ecx+0xA0]
        mov dword ptr ss : [esp+0x10], eax
        je public_627013c
        public_6270114 : nop
        push ebx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_632ca20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        call public_6271cc0
        cmp dword ptr ss : [esp+0x10], esi
        jne public_6270114
        mov ecx, dword ptr ss : [esp+0x14]
        public_627013c : nop
        mov eax, dword ptr ds : [ecx+0xB0]
        lea esi, ds:[ecx+0xAC]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_627017e
        public_6270156 : nop
        push ebx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_632ca20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        call public_6271cc0
        mov eax, dword ptr ss : [esp+0x18]
        cmp dword ptr ss : [esp+0x10], eax
        jne public_6270156
        public_627017e : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x38], 1
        call public_62728a0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        add esp, 4
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x38], bl
        call public_62728a0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        add esp, 4
        cmp eax, esi
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], eax
        je public_627020a
        public_62701e6 : nop
        push ebx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_632ca20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, ebp
        call public_6271cc0
        cmp dword ptr ss : [esp+0x14], esi
        jne public_62701e6
        public_627020a : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        pop edi
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6270090)
    }
}

#undef public_62700d6
#undef public_62700fe
#undef public_6270114
#undef public_627013c
#undef public_6270156
#undef public_627017e
#undef public_62701e6
#undef public_627020a
