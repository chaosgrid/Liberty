#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63413b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63978a1);

#define public_63414cf _public_63414cf
#define public_63414da _public_63414da
#define public_63414e0 _public_63414e0
#define public_6341508 _public_6341508
#define public_6341516 _public_6341516
#define public_6341520 _public_6341520
#define public_634155a _public_634155a

PROC_DECLARE(0x63413b0, internal_63413b0, public_63413b0);
extern "C" NAKED register_t __cdecl internal_63413b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63978a1 @0x63413b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63978a1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ebp
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], 0
        je public_634155a
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        push esi
        push edi
        lea eax, ds:[ebx+0x10]
        mov esi, eax
        lea edx, ss:[ebp+0x10]
        mov edi, edx
        mov ecx, 9
        rep movsd
        lea ecx, ds:[ebx+0x34]
        mov edi, dword ptr ds : [ecx]
        lea esi, ss:[ebp+0x34]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        mov esi, eax
        mov edi, edx
        mov ecx, 0xC
        rep movsd
        mov edx, dword ptr ds : [ebx+0x40]
        mov dword ptr ss : [ebp+0x40], edx
        mov eax, dword ptr ds : [ebx+0x44]
        mov dword ptr ss : [ebp+0x44], eax
        lea ecx, ds:[ebx+0x48]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[ebp+0x48]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ds : [ebx+0x54]
        mov dword ptr ss : [ebp+0x54], edx
        mov eax, dword ptr ds : [ebx+0x58]
        mov dword ptr ss : [ebp+0x58], eax
        mov ecx, dword ptr ds : [ebx+0x5C]
        mov dword ptr ss : [ebp+0x5C], ecx
        mov edx, dword ptr ds : [ebx+0x60]
        mov dword ptr ss : [ebp+0x60], edx
        mov eax, dword ptr ds : [ebx+0x64]
        mov dword ptr ss : [ebp+0x64], eax
        mov ecx, dword ptr ds : [ebx+0x68]
        mov dword ptr ss : [ebp+0x68], ecx
        mov edx, dword ptr ds : [ebx+0x6C]
        mov dword ptr ss : [ebp+0x6C], edx
        mov eax, dword ptr ds : [ebx+0x70]
        mov dword ptr ss : [ebp+0x70], eax
        mov ecx, dword ptr ds : [ebx+0x74]
        mov dword ptr ss : [ebp+0x74], ecx
        mov edx, dword ptr ds : [ebx+0x78]
        mov dword ptr ss : [ebp+0x78], edx
        lea eax, ds:[ebx+0x7C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x7C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [ebx+0x88]
        mov dword ptr ss : [ebp+0x88], ecx
        mov dl, byte ptr ds : [ebx+0x8C]
        mov byte ptr ss : [ebp+0x8C], dl
        mov al, byte ptr ds : [ebx+0x90]
        mov byte ptr ss : [ebp+0x90], al
        mov ecx, dword ptr ds : [ebx+0x94]
        test ecx, ecx
        jne public_63414cf
        xor eax, eax
        jmp public_63414da
        public_63414cf : nop
        mov eax, dword ptr ds : [ebx+0x98]
        sub eax, ecx
        sar eax, 3
        public_63414da : nop
        test eax, eax
        jge public_63414e0
        xor eax, eax
        public_63414e0 : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6391d9c
        mov dword ptr ss : [ebp+0x94], eax
        mov edx, dword ptr ds : [ebx+0x98]
        mov ecx, eax
        mov eax, dword ptr ds : [ebx+0x94]
        add esp, 4
        cmp eax, edx
        je public_6341520
        public_6341508 : nop
        test ecx, ecx
        je public_6341516
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        public_6341516 : nop
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6341508
        public_6341520 : nop
        mov dword ptr ss : [ebp+0x98], ecx
        mov dword ptr ss : [ebp+0x9C], ecx
        mov dl, byte ptr ds : [ebx+0xA0]
        mov byte ptr ss : [ebp+0xA0], dl
        mov eax, dword ptr ds : [ebx+0xA4]
        pop edi
        mov dword ptr ss : [ebp+0xA4], eax
        mov ecx, dword ptr ds : [ebx+0xA8]
        pop esi
        mov dword ptr ss : [ebp+0xA8], ecx
        mov dword ptr ss : [ebp+4], offset public_63a5094
        pop ebx
        public_634155a : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x63413b0)
    }
}

#undef public_63414cf
#undef public_63414da
#undef public_63414e0
#undef public_6341508
#undef public_6341516
#undef public_6341520
#undef public_634155a
