#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63440d0);
CLANG_FORWARD_PROC_SYMBOL(public_6355380);
CLANG_FORWARD_PROC_SYMBOL(public_63661a0);
CLANG_FORWARD_PROC_SYMBOL(public_6366400);
CLANG_FORWARD_JUMP_SYMBOL(public_639809b);

#define public_6355414 _public_6355414
#define public_6355419 _public_6355419
#define public_635543f _public_635543f
#define public_6355444 _public_6355444
#define public_635546a _public_635546a
#define public_635546f _public_635546f

PROC_DECLARE(0x6355380, internal_6355380, public_6355380);
extern "C" NAKED register_t __cdecl internal_6355380()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639809b @0x6355382*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639809b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        call public_6366400
        lea eax, ds:[esi+0x2C]
        mov dword ptr ds : [esi+0x28], eax
        xor eax, eax
        mov word ptr ds : [esi+0x24], 0x200
        mov word ptr ds : [esi+0x26], ax
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x1C], ecx
        mov dword ptr ds : [esi+0x20], edx
        mov ecx, dword ptr ds : [eax+4]
        movsx edx, word ptr ds : [eax+0x40]
        movsx eax, word ptr ds : [eax+0x3E]
        mov edi, dword ptr ds : [ecx+0xA0]
        sub eax, edx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [esi+4]
        add eax, 3
        and eax, 0xFFFFFFFC
        imul ecx, eax
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [edi+8]
        mov ebx, dword ptr ds : [edi+0xC]
        lea ecx, ds:[ecx*4+0xC]
        mov edx, eax
        lea eax, ds:[eax+ecx+0x1F]
        and eax, 0xFFFFFFE0
        cmp eax, ebx
        jb public_6355414
        push ecx
        mov ecx, edi
        call public_63440d0
        jmp public_6355419
        public_6355414 : nop
        mov dword ptr ds : [edi+8], eax
        mov eax, edx
        public_6355419 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ds : [edi+8]
        mov ebx, dword ptr ds : [edi+0xC]
        shl ecx, 2
        mov edx, eax
        lea eax, ds:[eax+ecx+0x1F]
        and eax, 0xFFFFFFE0
        cmp eax, ebx
        jb public_635543f
        push ecx
        mov ecx, edi
        call public_63440d0
        jmp public_6355444
        public_635543f : nop
        mov dword ptr ds : [edi+8], eax
        mov eax, edx
        public_6355444 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [edi+8]
        mov ebx, dword ptr ds : [edi+0xC]
        shl ecx, 2
        mov edx, eax
        lea eax, ds:[eax+ecx+0x1F]
        and eax, 0xFFFFFFE0
        cmp eax, ebx
        jb public_635546a
        push ecx
        mov ecx, edi
        call public_63440d0
        jmp public_635546f
        public_635546a : nop
        mov dword ptr ds : [edi+8], eax
        mov eax, edx
        public_635546f : nop
        mov ecx, esi
        mov dword ptr ds : [esi+0x14], eax
        call public_63661a0
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6355380)
    }
}

#undef public_6355414
#undef public_6355419
#undef public_635543f
#undef public_6355444
#undef public_635546a
#undef public_635546f
