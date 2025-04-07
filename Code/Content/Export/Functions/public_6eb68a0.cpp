#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb68a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa2f1);

#define public_6eb68e4 _public_6eb68e4
#define public_6eb68ec _public_6eb68ec
#define public_6eb68f2 _public_6eb68f2
#define public_6eb6995 _public_6eb6995

PROC_DECLARE(0x6eb68a0, internal_6eb68a0, public_6eb68a0);
extern "C" NAKED register_t __cdecl internal_6eb68a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faa2f1 @0x6eb68a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa2f1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], edi
        test edi, edi
        mov dword ptr ss : [esp+0x10], 0
        je public_6eb6995
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        mov al, byte ptr ds : [esi]
        mov byte ptr ds : [edi], al
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6eb68e4
        xor eax, eax
        jmp public_6eb68ec
        public_6eb68e4 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6eb68ec : nop
        test eax, eax
        jge public_6eb68f2
        xor eax, eax
        public_6eb68f2 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push eax
        push ecx
        push edx
        mov ecx, edi
        call public_6eed270
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], edx
        mov eax, dword ptr ds : [esi+0x14]
        mov ebx, dword ptr ds : [public_6fb3084]
        mov dword ptr ds : [edi+0x14], eax
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [edi+0x18], ecx
        mov edx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [edi+0x1C], edx
        mov eax, dword ptr ds : [esi+0x20]
        add edi, 0x20
        mov dword ptr ds : [edi], eax
        mov cl, byte ptr ds : [esi+0x24]
        mov byte ptr ds : [edi+4], cl
        mov dl, byte ptr ds : [esi+0x25]
        lea ecx, ds:[esi+0x2C]
        mov byte ptr ds : [edi+5], dl
        mov eax, dword ptr ds : [esi+0x28]
        push ecx
        lea ecx, ds:[edi+0xC]
        mov byte ptr ss : [esp+0x1C], 1
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ds : [edi+8], eax
        call ebx
        lea edx, ds:[esi+0x44]
        push edx
        lea ecx, ds:[edi+0x24]
        mov byte ptr ss : [esp+0x1C], 2
        call ebx
        lea eax, ds:[esi+0x5C]
        push eax
        lea ecx, ds:[edi+0x3C]
        mov byte ptr ss : [esp+0x1C], 3
        call ebx
        mov ecx, dword ptr ds : [esi+0x74]
        mov dword ptr ds : [edi+0x54], ecx
        mov edx, dword ptr ds : [esi+0x78]
        mov dword ptr ds : [edi+0x58], edx
        mov eax, dword ptr ds : [esi+0x7C]
        pop esi
        mov dword ptr ds : [edi+0x5C], eax
        pop ebx
        public_6eb6995 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6eb68a0)
    }
}

#undef public_6eb68e4
#undef public_6eb68ec
#undef public_6eb68f2
#undef public_6eb6995
