#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3d40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa0f1);

#define public_6eb3d85 _public_6eb3d85
#define public_6eb3d8d _public_6eb3d8d
#define public_6eb3d93 _public_6eb3d93
#define public_6eb3db2 _public_6eb3db2
#define public_6eb3dba _public_6eb3dba
#define public_6eb3dc4 _public_6eb3dc4
#define public_6eb3dcb _public_6eb3dcb

PROC_DECLARE(0x6eb3d40, internal_6eb3d40, public_6eb3d40);
extern "C" NAKED register_t __cdecl internal_6eb3d40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faa0f1 @0x6eb3d42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa0f1
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
        je public_6eb3dcb
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov cl, byte ptr ds : [esi+4]
        mov byte ptr ds : [edi+4], cl
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        jne public_6eb3d85
        xor eax, eax
        jmp public_6eb3d8d
        public_6eb3d85 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 2
        public_6eb3d8d : nop
        test eax, eax
        jge public_6eb3d93
        xor eax, eax
        public_6eb3d93 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov dword ptr ds : [edi+8], eax
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp eax, edx
        je public_6eb3dc4
        public_6eb3db2 : nop
        test ecx, ecx
        je public_6eb3dba
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_6eb3dba : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6eb3db2
        public_6eb3dc4 : nop
        mov dword ptr ds : [edi+0xC], ecx
        mov dword ptr ds : [edi+0x10], ecx
        pop esi
        public_6eb3dcb : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6eb3d40)
    }
}

#undef public_6eb3d85
#undef public_6eb3d8d
#undef public_6eb3d93
#undef public_6eb3db2
#undef public_6eb3dba
#undef public_6eb3dc4
#undef public_6eb3dcb
