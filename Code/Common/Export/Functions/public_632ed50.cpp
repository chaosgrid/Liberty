#include "Common-PCH.h"


#define public_632ed73 _public_632ed73
#define public_632edc3 _public_632edc3
#define public_632edda _public_632edda

PROC_DECLARE(0x632ed50, internal_632ed50, public_632ed50);
extern "C" NAKED register_t __cdecl internal_632ed50()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_640a74c], eax
        mov dword ptr ds : [public_640a748], eax
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [ecx+0xC]
        je public_632edda
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea esi, ds:[edx+0xC]
        public_632ed73 : nop
        fld dword ptr ds : [esi-8]
        fsub dword ptr ss : [ebp]
        fld dword ptr ds : [esi-4]
        fsub dword ptr ss : [ebp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [ebp+8]
        fld dword ptr ds : [esi+4]
        fadd dword ptr ss : [ebp+0xC]
        fld st(3)
        fmul st, st(4)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_632edc3
        mov eax, dword ptr ds : [edx]
        test eax, eax
        je public_632edc3
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edi]
        jae public_632edc3
        mov dword ptr ds : [edi+ebx*4+8], eax
        inc dword ptr ds : [edi+4]
        public_632edc3 : nop
        mov eax, dword ptr ds : [ecx+0xC]
        add edx, 0x14
        add esi, 0x14
        cmp edx, eax
        jne public_632ed73
        mov eax, dword ptr ds : [edi+4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_632edda : nop
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+4]
        ret 8
        UNREACHABLE_TRAP(0x632ed50)
    }
}

#undef public_632ed73
#undef public_632edc3
#undef public_632edda
