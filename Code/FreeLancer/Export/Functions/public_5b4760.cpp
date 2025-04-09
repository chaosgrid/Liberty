#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b3640);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c59d8);

#define public_5b4770 _public_5b4770
#define public_5b47c5 _public_5b47c5
#define public_5b47c7 _public_5b47c7
#define public_5b4808 _public_5b4808

PROC_DECLARE(0x5b4760, internal_5b4760, public_5b4760);
extern "C" NAKED register_t __cdecl internal_5b4760()
{
    __asm
    {
        mov ecx, offset public_67ecf8
        jmp public_5b4770
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_5b4770 : nop
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c59d8 @0x5b4778*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c59d8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        push edi
        push 0x1C
        mov ebx, ecx
        call public_5b7e84
        xor esi, esi
        add esp, 4
        cmp eax, esi
        je public_5b47c5
        mov dword ptr ds : [eax+4], offset public_5e7010
        mov dword ptr ds : [eax+0xC], esi
        mov dword ptr ds : [eax+0x10], esi
        mov dword ptr ds : [eax+0x14], 0xBF800000
        mov dword ptr ds : [eax+0x18], esi
        mov dword ptr ds : [eax], offset public_5e7008
        mov dword ptr ds : [eax+8], 0x658
        mov edi, eax
        jmp public_5b47c7
        public_5b47c5 : nop
        xor edi, edi
        public_5b47c7 : nop
        mov cl, byte ptr ds : [public_67ed0c]
        mov al, 1
        test al, cl
        jne public_5b4808
        or cl, al
        mov al, byte ptr ss : [esp+0xF]
        push 0xC
        mov byte ptr ds : [public_67ed0c], cl
        mov byte ptr ds : [public_67ed00], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_5b3640 @0x5b47f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b3640
        mov dword ptr ds : [public_67ed04], eax
        mov dword ptr ds : [public_67ed08], esi
        call public_5b7e6c
        add esp, 8
        public_5b4808 : nop
        mov dword ptr ss : [esp+0x10], esi
        mov eax, dword ptr ds : [public_67ed04]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x1C], esi
        lea esi, ds:[eax+4]
        push ecx
        push eax
        mov ecx, offset public_67ed00
        call public_42a7e0
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_5999b0
        inc dword ptr ds : [public_67ed08]
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [public_67ed04]
        mov ecx, dword ptr ds : [eax+4]
        add esp, 0xC
        mov dword ptr ds : [ecx+8], edi
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x5b4760)
    }
}

#undef public_5b4770
#undef public_5b47c5
#undef public_5b47c7
#undef public_5b4808
