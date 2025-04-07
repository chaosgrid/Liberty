#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71920);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faff1f);

#define public_6f71962 _public_6f71962
#define public_6f71980 _public_6f71980
#define public_6f7198c _public_6f7198c
#define public_6f7199b _public_6f7199b
#define public_6f719a6 _public_6f719a6
#define public_6f719c0 _public_6f719c0
#define public_6f719cc _public_6f719cc
#define public_6f719db _public_6f719db

PROC_DECLARE(0x6f71920, internal_6f71920, public_6f71920);
extern "C" NAKED register_t __cdecl internal_6f71920()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faff1f @0x6f71922*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faff1f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_6fbbec0
        mov dword ptr ds : [esi+0x10], offset public_6fbbeac
        mov edi, dword ptr ds : [esi+0x38]
        mov eax, dword ptr ds : [esi+0x3C]
        cmp edi, eax
        mov dword ptr ss : [esp+0x1C], 2
        je public_6f7199b
        lea ebx, ds:[edi+4]
        public_6f71962 : nop
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [esi+0x3C]
        mov eax, ebx
        cmp eax, ecx
        je public_6f7198c
        mov edx, edi
        sub edx, ebx
        lea esp, ss:[esp]
        public_6f71980 : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], ebp
        add eax, 4
        cmp eax, ecx
        jne public_6f71980
        public_6f7198c : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        add ecx, 0xFFFFFFFC
        mov eax, ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x3C], ecx
        jne public_6f71962
        public_6f7199b : nop
        mov edi, dword ptr ds : [esi+0x48]
        cmp edi, dword ptr ds : [esi+0x4C]
        je public_6f719db
        lea ebx, ds:[edi+4]
        public_6f719a6 : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [esi+0x4C]
        mov eax, ebx
        cmp eax, ecx
        je public_6f719cc
        mov edx, edi
        sub edx, ebx
        lea ecx, ds:[ecx]
        public_6f719c0 : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], ebp
        add eax, 4
        cmp eax, ecx
        jne public_6f719c0
        public_6f719cc : nop
        mov ecx, dword ptr ds : [esi+0x4C]
        add ecx, 0xFFFFFFFC
        mov eax, ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x4C], ecx
        jne public_6f719a6
        public_6f719db : nop
        mov eax, dword ptr ds : [esi+0x48]
        push eax
        call public_6fa8fe0
        xor edi, edi
        mov dword ptr ds : [esi+0x48], edi
        mov dword ptr ds : [esi+0x4C], edi
        mov dword ptr ds : [esi+0x50], edi
        mov eax, dword ptr ds : [esi+0x38]
        push eax
        call public_6fa8fe0
        add esp, 8
        mov ecx, esi
        mov dword ptr ds : [esi+0x38], edi
        mov dword ptr ds : [esi+0x3C], edi
        mov dword ptr ds : [esi+0x40], edi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3200]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f71920)
    }
}

#undef public_6f71962
#undef public_6f71980
#undef public_6f7198c
#undef public_6f7199b
#undef public_6f719a6
#undef public_6f719c0
#undef public_6f719cc
#undef public_6f719db
