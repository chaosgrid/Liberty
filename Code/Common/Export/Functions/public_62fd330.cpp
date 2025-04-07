#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fd330);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6395b71);

#define public_62fd383 _public_62fd383
#define public_62fd38b _public_62fd38b
#define public_62fd391 _public_62fd391
#define public_62fd3b0 _public_62fd3b0
#define public_62fd3b8 _public_62fd3b8
#define public_62fd3c2 _public_62fd3c2
#define public_62fd3c9 _public_62fd3c9

PROC_DECLARE(0x62fd330, internal_62fd330, public_62fd330);
extern "C" NAKED register_t __cdecl internal_62fd330()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395b71 @0x62fd332*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395b71
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
        je public_62fd3c9
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov cx, word ptr ds : [esi+4]
        mov word ptr ds : [edi+4], cx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], edx
        mov al, byte ptr ds : [esi+0xC]
        mov byte ptr ds : [edi+0xC], al
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        jne public_62fd383
        xor eax, eax
        jmp public_62fd38b
        public_62fd383 : nop
        mov eax, dword ptr ds : [esi+0x14]
        sub eax, ecx
        sar eax, 2
        public_62fd38b : nop
        test eax, eax
        jge public_62fd391
        xor eax, eax
        public_62fd391 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6391d9c
        mov dword ptr ds : [edi+0x10], eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov esi, dword ptr ds : [esi+0x10]
        add esp, 4
        cmp esi, ecx
        je public_62fd3c2
        mov edi, edi
        public_62fd3b0 : nop
        test eax, eax
        je public_62fd3b8
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        public_62fd3b8 : nop
        add esi, 4
        add eax, 4
        cmp esi, ecx
        jne public_62fd3b0
        public_62fd3c2 : nop
        mov dword ptr ds : [edi+0x14], eax
        mov dword ptr ds : [edi+0x18], eax
        pop esi
        public_62fd3c9 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62fd330)
    }
}

#undef public_62fd383
#undef public_62fd38b
#undef public_62fd391
#undef public_62fd3b0
#undef public_62fd3b8
#undef public_62fd3c2
#undef public_62fd3c9
