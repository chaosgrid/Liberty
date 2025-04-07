#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0a67);

#define public_6f854a3 _public_6f854a3
#define public_6f854ab _public_6f854ab
#define public_6f854b1 _public_6f854b1
#define public_6f854d0 _public_6f854d0
#define public_6f854d8 _public_6f854d8
#define public_6f854e3 _public_6f854e3
#define public_6f85530 _public_6f85530

PROC_DECLARE(0x6f85440, internal_6f85440, public_6f85440);
extern "C" NAKED register_t __cdecl internal_6f85440()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0a67 @0x6f85442*/
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
        push esi
        push edi
        push 0x48
        mov edi, ecx
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_6f85530
        lea eax, ds:[edi+4]
        push eax
        lea ecx, ds:[esi+4]
        call dword ptr ds : [public_6fb3084]
        mov ecx, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x1C], ecx
        mov dl, byte ptr ds : [edi+0x20]
        mov byte ptr ds : [esi+0x20], dl
        mov ecx, dword ptr ds : [edi+0x24]
        test ecx, ecx
        mov byte ptr ss : [esp+0x14], 1
        jne public_6f854a3
        xor eax, eax
        jmp public_6f854ab
        public_6f854a3 : nop
        mov eax, dword ptr ds : [edi+0x28]
        sub eax, ecx
        sar eax, 2
        public_6f854ab : nop
        test eax, eax
        jge public_6f854b1
        xor eax, eax
        public_6f854b1 : nop
        shl eax, 2
        push eax
        call public_6fa912a
        mov dword ptr ds : [esi+0x24], eax
        mov edx, dword ptr ds : [edi+0x28]
        mov ecx, eax
        mov eax, dword ptr ds : [edi+0x24]
        add esp, 4
        cmp eax, edx
        je public_6f854e3
        push ebx
        lea ecx, ds:[ecx]
        public_6f854d0 : nop
        test ecx, ecx
        je public_6f854d8
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        public_6f854d8 : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f854d0
        pop ebx
        public_6f854e3 : nop
        mov dword ptr ds : [esi+0x28], ecx
        mov dword ptr ds : [esi+0x2C], ecx
        mov dword ptr ds : [esi], offset public_6fbc700
        mov ecx, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [esi+0x30], ecx
        mov edx, dword ptr ds : [edi+0x34]
        mov dword ptr ds : [esi+0x34], edx
        lea eax, ds:[edi+0x38]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x38]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov cl, byte ptr ds : [edi+0x44]
        pop edi
        mov byte ptr ds : [esi+0x44], cl
        mov dword ptr ds : [esi], offset public_6fbc6d8
        mov eax, esi
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6f85530 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        xor eax, eax
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f85440)
    }
}

#undef public_6f854a3
#undef public_6f854ab
#undef public_6f854b1
#undef public_6f854d0
#undef public_6f854d8
#undef public_6f854e3
#undef public_6f85530
