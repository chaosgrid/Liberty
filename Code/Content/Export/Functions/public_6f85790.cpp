#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0a67);

#define public_6f857f3 _public_6f857f3
#define public_6f857fb _public_6f857fb
#define public_6f85801 _public_6f85801
#define public_6f85820 _public_6f85820
#define public_6f85828 _public_6f85828
#define public_6f85832 _public_6f85832
#define public_6f85893 _public_6f85893

PROC_DECLARE(0x6f85790, internal_6f85790, public_6f85790);
extern "C" NAKED register_t __cdecl internal_6f85790()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0a67 @0x6f85792*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0a67
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push 0x5C
        mov esi, ecx
        call public_6fa912a
        mov ebx, eax
        add esp, 4
        mov dword ptr ss : [esp+8], ebx
        test ebx, ebx
        mov dword ptr ss : [esp+0x14], 0
        je public_6f85893
        lea eax, ds:[esi+4]
        push eax
        lea ecx, ds:[ebx+4]
        call dword ptr ds : [public_6fb3084]
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [ebx+0x1C], ecx
        mov dl, byte ptr ds : [esi+0x20]
        mov byte ptr ds : [ebx+0x20], dl
        mov ecx, dword ptr ds : [esi+0x24]
        test ecx, ecx
        mov byte ptr ss : [esp+0x14], 1
        jne public_6f857f3
        xor eax, eax
        jmp public_6f857fb
        public_6f857f3 : nop
        mov eax, dword ptr ds : [esi+0x28]
        sub eax, ecx
        sar eax, 2
        public_6f857fb : nop
        test eax, eax
        jge public_6f85801
        xor eax, eax
        public_6f85801 : nop
        shl eax, 2
        push edi
        push eax
        call public_6fa912a
        mov dword ptr ds : [ebx+0x24], eax
        mov edx, dword ptr ds : [esi+0x28]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+0x24]
        add esp, 4
        cmp eax, edx
        je public_6f85832
        lea ecx, ds:[ecx]
        public_6f85820 : nop
        test ecx, ecx
        je public_6f85828
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        public_6f85828 : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f85820
        public_6f85832 : nop
        mov dword ptr ds : [ebx+0x28], ecx
        mov dword ptr ds : [ebx+0x2C], ecx
        mov dword ptr ds : [ebx], offset public_6fbc700
        mov ecx, dword ptr ds : [esi+0x30]
        mov dword ptr ds : [ebx+0x30], ecx
        mov edx, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [ebx+0x34], edx
        lea eax, ds:[esi+0x38]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x38]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov cl, byte ptr ds : [esi+0x44]
        mov byte ptr ds : [ebx+0x44], cl
        mov dword ptr ds : [ebx], offset public_6fbc6d8
        add esi, 0x48
        lea edi, ds:[ebx+0x48]
        mov ecx, 5
        rep movsd
        pop edi
        pop esi
        mov dword ptr ds : [ebx], offset public_6fbc710
        mov eax, ebx
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6f85893 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f85790)
    }
}

#undef public_6f857f3
#undef public_6f857fb
#undef public_6f85801
#undef public_6f85820
#undef public_6f85828
#undef public_6f85832
#undef public_6f85893
