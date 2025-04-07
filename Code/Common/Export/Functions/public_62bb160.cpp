#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bb160);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6394871);

#define public_62bb19f _public_62bb19f
#define public_62bb1a7 _public_62bb1a7
#define public_62bb1ad _public_62bb1ad
#define public_62bb1d0 _public_62bb1d0
#define public_62bb1de _public_62bb1de
#define public_62bb1e9 _public_62bb1e9
#define public_62bb1fc _public_62bb1fc

PROC_DECLARE(0x62bb160, internal_62bb160, public_62bb160);
extern "C" NAKED register_t __cdecl internal_62bb160()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394871 @0x62bb162*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394871
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
        je public_62bb1fc
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov al, byte ptr ds : [esi]
        mov byte ptr ds : [edi], al
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_62bb19f
        xor eax, eax
        jmp public_62bb1a7
        public_62bb19f : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        public_62bb1a7 : nop
        test eax, eax
        jge public_62bb1ad
        xor eax, eax
        public_62bb1ad : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6391d9c
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_62bb1e9
        push ebx
        lea ecx, ds:[ecx]
        public_62bb1d0 : nop
        test ecx, ecx
        je public_62bb1de
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], ebx
        public_62bb1de : nop
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_62bb1d0
        pop ebx
        public_62bb1e9 : nop
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], ecx
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], edx
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+0x14], eax
        pop esi
        public_62bb1fc : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62bb160)
    }
}

#undef public_62bb19f
#undef public_62bb1a7
#undef public_62bb1ad
#undef public_62bb1d0
#undef public_62bb1de
#undef public_62bb1e9
#undef public_62bb1fc
