#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24820);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58451);

#define public_6f2485f _public_6f2485f
#define public_6f24867 _public_6f24867
#define public_6f2486d _public_6f2486d
#define public_6f24890 _public_6f24890
#define public_6f24898 _public_6f24898
#define public_6f248a2 _public_6f248a2
#define public_6f248a9 _public_6f248a9

PROC_DECLARE(0x6f24820, internal_6f24820, public_6f24820);
extern "C" NAKED register_t __cdecl internal_6f24820()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58451 @0x6f24822*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58451
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
        je public_6f248a9
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov al, byte ptr ds : [esi]
        mov byte ptr ds : [edi], al
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f2485f
        xor eax, eax
        jmp public_6f24867
        public_6f2485f : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6f24867 : nop
        test eax, eax
        jge public_6f2486d
        xor eax, eax
        public_6f2486d : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6f57e9c
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_6f248a2
        lea esp, ss:[esp]
        public_6f24890 : nop
        test ecx, ecx
        je public_6f24898
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_6f24898 : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f24890
        public_6f248a2 : nop
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], ecx
        pop esi
        public_6f248a9 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f24820)
    }
}

#undef public_6f2485f
#undef public_6f24867
#undef public_6f2486d
#undef public_6f24890
#undef public_6f24898
#undef public_6f248a2
#undef public_6f248a9
