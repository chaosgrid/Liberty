#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b3640);
CLANG_FORWARD_PROC_SYMBOL(public_5b4050);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5b409a _public_5b409a
#define public_5b40a7 _public_5b40a7
#define public_5b40e5 _public_5b40e5

PROC_DECLARE(0x5b4050, internal_5b4050, public_5b4050);
extern "C" NAKED register_t __cdecl internal_5b4050()
{
    __asm
    {
        push ecx
        mov cl, byte ptr ds : [public_67ed0c]
        mov al, 1
        test al, cl
        push ebx
        push edi
        jne public_5b409a
        mov bl, cl
        or bl, al
        mov al, byte ptr ss : [esp+0xB]
        push 0xC
        mov byte ptr ds : [public_67ed0c], bl
        mov byte ptr ds : [public_67ed00], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_5b3640 @0x5b407e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b3640
        mov dword ptr ds : [public_67ed04], eax
        mov dword ptr ds : [public_67ed08], 0
        call public_5b7e6c
        add esp, 8
        public_5b409a : nop
        mov ebx, dword ptr ds : [public_67ed04]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_5b40e5
        push esi
        public_5b40a7 : nop
        mov esi, edi
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [esi+8]
        push edx
        call public_5b7e1d
        push esi
        mov dword ptr ds : [esi+8], 0
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_67ed08]
        add esp, 8
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [public_67ed08], ecx
        jne public_5b40a7
        pop esi
        public_5b40e5 : nop
        pop edi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5b4050)
    }
}

#undef public_5b409a
#undef public_5b40a7
#undef public_5b40e5
