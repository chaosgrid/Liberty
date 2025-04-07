#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5a1b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf821);

#define public_6f5a208 _public_6f5a208
#define public_6f5a220 _public_6f5a220
#define public_6f5a228 _public_6f5a228
#define public_6f5a250 _public_6f5a250
#define public_6f5a285 _public_6f5a285
#define public_6f5a297 _public_6f5a297
#define public_6f5a29f _public_6f5a29f

PROC_DECLARE(0x6f5a1b0, internal_6f5a1b0, public_6f5a1b0);
extern "C" NAKED register_t __cdecl internal_6f5a1b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf821 @0x6f5a1b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf821
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+8], edi
        test edi, edi
        mov dword ptr ss : [esp+0x14], 0
        je public_6f5a29f
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], edx
        mov al, byte ptr ds : [esi+0xC]
        mov byte ptr ds : [edi+0xC], al
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jne public_6f5a208
        xor edx, edx
        jmp public_6f5a220
        public_6f5a208 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f5a220 : nop
        test edx, edx
        mov eax, edx
        jge public_6f5a228
        xor eax, eax
        public_6f5a228 : nop
        imul eax, 0x38
        push eax
        call public_6fa912a
        mov dword ptr ds : [edi+0x10], eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov ebx, dword ptr ds : [esi+0x10]
        add esp, 4
        cmp ebx, ecx
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x28], eax
        je public_6f5a297
        push ebp
        lea ebp, ds:[eax+4]
        lea ecx, ds:[ecx]
        public_6f5a250 : nop
        test eax, eax
        je public_6f5a285
        mov dl, byte ptr ds : [ebx]
        mov ecx, ebp
        mov byte ptr ds : [eax], dl
        call public_6f5a2b0
        lea ecx, ss:[ebp+0x24]
        call public_6f5a2b0
        lea esi, ds:[ebx+4]
        mov ecx, 0xC
        mov edi, ebp
        rep movsd
        mov eax, dword ptr ds : [ebx+0x34]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [ebp+0x30], eax
        mov eax, dword ptr ss : [esp+0x2C]
        public_6f5a285 : nop
        add eax, 0x38
        add ebx, 0x38
        add ebp, 0x38
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x2C], eax
        jne public_6f5a250
        pop ebp
        public_6f5a297 : nop
        pop esi
        mov dword ptr ds : [edi+0x14], eax
        mov dword ptr ds : [edi+0x18], eax
        pop ebx
        public_6f5a29f : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f5a1b0)
    }
}

#undef public_6f5a208
#undef public_6f5a220
#undef public_6f5a228
#undef public_6f5a250
#undef public_6f5a285
#undef public_6f5a297
#undef public_6f5a29f
