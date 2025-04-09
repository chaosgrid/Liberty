#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_57b390 _public_57b390
#define public_57b3c6 _public_57b3c6
#define public_57b3d6 _public_57b3d6

PROC_DECLARE(0x57b370, internal_57b370, public_57b370);
extern "C" NAKED register_t __cdecl internal_57b370()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x490]
        test eax, eax
        je public_57b3d6
        push ebp
        mov ebp, dword ptr ds : [ebx+0x48C]
        push edi
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_57b3c6
        push esi
        lea ecx, ds:[ecx]
        public_57b390 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_45eeb0
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+0x490]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+0x490], ecx
        jne public_57b390
        pop esi
        public_57b3c6 : nop
        mov al, 1
        pop edi
        mov byte ptr ds : [ebx+0x400], al
        mov byte ptr ds : [ebx+0x401], al
        pop ebp
        public_57b3d6 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x57b370)
    }
}

#undef public_57b390
#undef public_57b3c6
#undef public_57b3d6
