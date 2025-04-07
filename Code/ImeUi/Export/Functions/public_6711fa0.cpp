#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67169d0);
CLANG_FORWARD_PROC_SYMBOL(public_67169dc);

#define public_6711fcf _public_6711fcf
#define public_6711fe1 _public_6711fe1
#define public_6711fe7 _public_6711fe7
#define public_6712016 _public_6712016
#define public_671201a _public_671201a
#define public_671202f _public_671202f
#define public_6712046 _public_6712046
#define public_671205b _public_671205b
#define public_671205f _public_671205f

PROC_DECLARE(0x6711fa0, internal_6711fa0, public_6711fa0);
extern "C" NAKED register_t __cdecl internal_6711fa0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        lea ebp, ds:[ecx+4]
        lea edx, ds:[eax+4]
        push esi
        cmp ebp, edx
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        je public_671205f
        mov esi, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x10], edx
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [edx]
        cmp eax, esi
        je public_6711fe1
        public_6711fcf : nop
        cmp ebx, edx
        je public_6711fe1
        mov edi, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edi
        mov eax, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [ebx]
        cmp eax, esi
        jne public_6711fcf
        public_6711fe1 : nop
        cmp eax, esi
        mov edi, eax
        je public_6712016
        public_6711fe7 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        call public_67169d0
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+8], ecx
        jne public_6711fe7
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        public_6712016 : nop
        cmp ebx, edx
        je public_671205b
        public_671201a : nop
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_67169dc
        add esp, 4
        mov dword ptr ds : [eax], esi
        test edi, edi
        jne public_671202f
        mov edi, eax
        public_671202f : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6712046
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_6712046 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_671201a
        mov ecx, dword ptr ss : [esp+0x14]
        public_671205b : nop
        mov eax, dword ptr ss : [esp+0x1C]
        public_671205f : nop
        mov edx, dword ptr ds : [eax+0x10]
        pop edi
        mov dword ptr ds : [ecx+0x10], edx
        mov dl, byte ptr ds : [eax+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov dl, byte ptr ds : [eax+0x15]
        mov byte ptr ds : [ecx+0x15], dl
        mov dl, byte ptr ds : [eax+0x16]
        mov byte ptr ds : [ecx+0x16], dl
        mov al, byte ptr ds : [eax+0x17]
        pop esi
        mov byte ptr ds : [ecx+0x17], al
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6711fa0)
    }
}

#undef public_6711fcf
#undef public_6711fe1
#undef public_6711fe7
#undef public_6712016
#undef public_671201a
#undef public_671202f
#undef public_6712046
#undef public_671205b
#undef public_671205f
