#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f890f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f89a00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0f93);

#define public_6f8917e _public_6f8917e
#define public_6f89180 _public_6f89180

PROC_DECLARE(0x6f890f0, internal_6f890f0, public_6f890f0);
extern "C" NAKED register_t __cdecl internal_6f890f0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb0f93 @0x6f890f8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0f93
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edi+0x10]
        xor eax, eax
        test ecx, ecx
        jle public_6f89180
        cmp ecx, 3
        jg public_6f89180
        push 0xB4
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_6f8917e
        push edi
        mov ecx, esi
        call public_6f89a00
        mov dword ptr ds : [esi+0xA8], 0
        mov dword ptr ds : [esi+0xAC], 0xBF800000
        lea ecx, ds:[edi+4]
        mov dword ptr ds : [esi+0xB0], edi
        mov eax, dword ptr ds : [ecx]
        mov byte ptr ss : [esp+0x10], 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi], offset public_6fbc928
        mov dword ptr ds : [esi+0x10], offset public_6fbc910
        mov dword ptr ds : [esi+0x54], offset public_6fbc90c
        mov eax, esi
        jmp public_6f89180
        public_6f8917e : nop
        xor eax, eax
        public_6f89180 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        xor edx, edx
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ss : [esp+8]
        test eax, eax
        setne dl
        pop edi
        mov al, dl
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f890f0)
    }
}

#undef public_6f8917e
#undef public_6f89180
