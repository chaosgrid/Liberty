#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d4ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d4ec33 _public_6d4ec33
#define public_6d4ec50 _public_6d4ec50
#define public_6d4ec77 _public_6d4ec77
#define public_6d4eca0 _public_6d4eca0
#define public_6d4ecc0 _public_6d4ecc0
#define public_6d4ecc4 _public_6d4ecc4
#define public_6d4ecef _public_6d4ecef

PROC_DECLARE(0x6d4ec10, internal_6d4ec10, public_6d4ec10);
extern "C" NAKED register_t __cdecl internal_6d4ec10()
{
    __asm
    {
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        test ebp, ebp
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], edi
        je public_6d4ec33
        push ebp
        call dword ptr ds : [public_6d643c0]
        add esp, 4
        test eax, eax
        je public_6d4ecef
        public_6d4ec33 : nop
        cmp dword ptr ds : [edi+0x264], ebp
        push esi
        je public_6d4ecc4
        add edi, 0x26C
        push ebx
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6d4ec77
        public_6d4ec50 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_6d4ec50
        public_6d4ec77 : nop
        test ebp, 0x3FFFFFFF
        pop ebx
        je public_6d4ecc0
        push ebp
        call dword ptr ds : [public_6d643c0]
        add esp, 4
        test eax, eax
        je public_6d4eca0
        push edi
        mov ecx, eax
        call dword ptr ds : [public_6d644a0]
        jmp public_6d4ecc0
        lea esp, ss:[esp]
        public_6d4eca0 : nop
        push ebp
        push 0xD07
/*FIXUP push offset public_6d6b280 @0x6d4eca6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b280
        mov eax, 0x100001
/*FIXUP push offset public_6d6b700 @0x6d4ecb0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b700
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d4ecc0 : nop
        mov edi, dword ptr ss : [esp+0xC]
        public_6d4ecc4 : nop
        mov eax, dword ptr ds : [edi+0x348]
        mov dword ptr ds : [edi+0x264], ebp
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        lea esi, ds:[edi+0x348]
        push ebp
        push eax
        call dword ptr ds : [edx+0x54]
        push esi
        push 0x35
        call public_6d43650
        add esp, 8
        pop esi
        public_6d4ecef : nop
        pop edi
        pop ebp
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d4ec10)
    }
}

#undef public_6d4ec33
#undef public_6d4ec50
#undef public_6d4ec77
#undef public_6d4eca0
#undef public_6d4ecc0
#undef public_6d4ecc4
#undef public_6d4ecef
