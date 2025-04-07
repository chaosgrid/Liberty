#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b3520);
CLANG_FORWARD_PROC_SYMBOL(public_5b3640);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c59d8);

#define public_5b3580 _public_5b3580
#define public_5b35af _public_5b35af
#define public_5b35ff _public_5b35ff
#define public_5b360a _public_5b360a

PROC_DECLARE(0x5b3520, internal_5b3520, public_5b3520);
extern "C" NAKED register_t __cdecl internal_5b3520()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c59d8 @0x5b3522*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c59d8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov cl, byte ptr ds : [public_67ed0c]
        push ebx
        mov al, 1
        test al, cl
        push esi
        push edi
        jne public_5b3580
        mov bl, cl
        or bl, al
        mov al, byte ptr ss : [esp+0x20]
        push 0xC
        mov byte ptr ds : [public_67ed0c], bl
        mov byte ptr ds : [public_67ed00], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_5b3640 @0x5b3564*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b3640
        mov dword ptr ds : [public_67ed04], eax
        mov dword ptr ds : [public_67ed08], 0
        call public_5b7e6c
        add esp, 8
        public_5b3580 : nop
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ds : [public_67ed04]
        mov edi, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push 0xC
        mov dword ptr ss : [esp+0x1C], 0
        mov ebx, eax
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebx
        jne public_5b35af
        mov edi, eax
        public_5b35af : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0xC]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_5999b0
        mov ebx, dword ptr ds : [public_67ed08]
        mov eax, dword ptr ss : [esp+0x14]
        inc ebx
        push eax
        mov dword ptr ds : [public_67ed08], ebx
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_67ed04]
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 0xC
        test ecx, ecx
        pop edi
        pop esi
        mov dword ptr ds : [edx+8], eax
        pop ebx
        je public_5b35ff
        mov dword ptr ds : [eax+8], ecx
        public_5b35ff : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        test ecx, ecx
        je public_5b360a
        mov dword ptr ds : [eax+0xC], ecx
        public_5b360a : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5b3520)
    }
}

#undef public_5b3580
#undef public_5b35af
#undef public_5b35ff
#undef public_5b360a
