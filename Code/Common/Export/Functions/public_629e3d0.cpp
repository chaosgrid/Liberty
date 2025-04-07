#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_629e3e4 _public_629e3e4
#define public_629e422 _public_629e422
#define public_629e423 _public_629e423
#define public_629e431 _public_629e431
#define public_629e439 _public_629e439

PROC_DECLARE(0x629e3d0, internal_629e3d0, public_629e3d0);
extern "C" NAKED register_t __cdecl internal_629e3d0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+0x54]
        mov eax, dword ptr ds : [ebx+0x58]
        push edi
        xor edi, edi
        xor ebp, ebp
        cmp esi, eax
        je public_629e431
        public_629e3e4 : nop
        cmp dword ptr ds : [esi+4], edi
        je public_629e423
        mov eax, dword ptr ds : [esi+8]
        cmp eax, edi
        lea ecx, ds:[esi+8]
        je public_629e422
        add eax, 0xFFFFFF64
        cmp eax, edi
        je public_629e422
        mov edx, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [eax+0xB0], edx
        jne public_629e422
        push edi
        call public_6341610
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], edi
        jmp public_629e423
        public_629e422 : nop
        inc ebp
        public_629e423 : nop
        mov eax, dword ptr ds : [ebx+0x58]
        add esi, 0x24
        cmp esi, eax
        jne public_629e3e4
        cmp ebp, edi
        jne public_629e439
        public_629e431 : nop
        mov eax, dword ptr ds : [ebx]
        push edi
        mov ecx, ebx
        call dword ptr ds : [eax+0x30]
        public_629e439 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x629e3d0)
    }
}

#undef public_629e3e4
#undef public_629e422
#undef public_629e423
#undef public_629e431
#undef public_629e439
