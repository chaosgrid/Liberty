#include "THORN-PCH.h"


#define public_6f433d6 _public_6f433d6
#define public_6f433ec _public_6f433ec
#define public_6f433fc _public_6f433fc
#define public_6f43412 _public_6f43412
#define public_6f43428 _public_6f43428
#define public_6f4343e _public_6f4343e

PROC_DECLARE(0x6f433c0, internal_6f433c0, public_6f433c0);
extern "C" NAKED register_t __cdecl internal_6f433c0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        xor ebx, ebx
        cmp eax, ebx
        je public_6f433d6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x10], ebx
        public_6f433d6 : nop
        mov eax, dword ptr ds : [esi+0x104]
        cmp eax, ebx
        je public_6f433ec
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x104], ebx
        public_6f433ec : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_6f433fc
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x14], ebx
        public_6f433fc : nop
        mov eax, dword ptr ds : [esi+0x108]
        cmp eax, ebx
        je public_6f43412
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x108], ebx
        public_6f43412 : nop
        mov eax, dword ptr ds : [esi+0x10C]
        cmp eax, ebx
        je public_6f43428
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x10C], ebx
        public_6f43428 : nop
        mov eax, dword ptr ds : [esi+0x114]
        cmp eax, ebx
        je public_6f4343e
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x114], ebx
        public_6f4343e : nop
        mov byte ptr ds : [esi+0x6C], bl
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f433c0)
    }
}

#undef public_6f433d6
#undef public_6f433ec
#undef public_6f433fc
#undef public_6f43412
#undef public_6f43428
#undef public_6f4343e
