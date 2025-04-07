#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad293);

#define public_6f0721e _public_6f0721e
#define public_6f07223 _public_6f07223

PROC_DECLARE(0x6f07180, internal_6f07180, public_6f07180);
extern "C" NAKED register_t __cdecl internal_6f07180()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad293 @0x6f07182*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad293
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x34
        mov edi, ecx
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_6f07223
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi], offset public_6fb43f8
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        mov dl, byte ptr ds : [edi+0x10]
        mov dword ptr ds : [esi], offset public_6fb8240
        mov byte ptr ds : [esi+0x10], dl
        mov ecx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], ecx
        mov edx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x18], edx
        mov ecx, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x1C], ecx
        mov edx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x20], edx
        mov dword ptr ds : [esi], offset public_6fb81d8
        mov ecx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [esi+0x24], ecx
        mov edx, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [esi+0x2C], edx
        mov ecx, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [esi+0x30], ecx
        mov dword ptr ds : [esi], offset public_6fb8330
        mov ecx, dword ptr ds : [edi+0x28]
        cmp ecx, eax
        mov byte ptr ss : [esp+0x14], 1
        je public_6f0721e
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        public_6f0721e : nop
        mov dword ptr ds : [esi+0x28], eax
        mov eax, esi
        public_6f07223 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f07180)
    }
}

#undef public_6f0721e
#undef public_6f07223
