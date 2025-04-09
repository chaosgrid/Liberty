#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8bc0);
CLANG_FORWARD_PROC_SYMBOL(public_5842a0);

#define public_584361 _public_584361
#define public_584423 _public_584423

PROC_DECLARE(0x5842a0, internal_5842a0, public_5842a0);
extern "C" NAKED register_t __cdecl internal_5842a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+8]
        push ebx
        fld dword ptr ds : [eax+4]
        push ebp
        fld dword ptr ds : [eax]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [esi+0x4E4]
        lea eax, ds:[esi+0x488]
        fstp dword ptr ds : [esi+0x4E8]
        xor ebx, ebx
        push edi
        fstp dword ptr ds : [esi+0x4EC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax+8]
        lea ecx, ds:[esi+0x358]
        fld dword ptr ds : [eax+4]
        mov edx, 3
        fld dword ptr ds : [eax]
        lea eax, ds:[ecx+0x18]
        fstp dword ptr ds : [esi+0x37C]
        fstp dword ptr ds : [esi+0x380]
        fstp dword ptr ds : [esi+0x384]
        fld dword ptr ds : [esi+0x384]
        fld dword ptr ds : [esi+0x380]
        fld dword ptr ds : [esi+0x37C]
        mov dword ptr ds : [ecx+4], ebx
        fmul dword ptr ds : [public_5c77f4]
        mov dword ptr ds : [ecx+0xC], ebx
        mov dword ptr ds : [ecx+0x10], 0x3F800000
        fst dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x14], ebx
        fcos 
        mov dword ptr ds : [ecx+0x1C], ebx
        fld dword ptr ss : [esp+0x14]
        fsin 
        fld st(1)
        fstp dword ptr ds : [ecx]
        fst dword ptr ds : [ecx+8]
        fchs 
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [ecx+0x20]
        fmul dword ptr ds : [public_5c77f4]
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x14]
        fsin 
        public_584361 : nop
        fld dword ptr ds : [eax-0xC]
        add eax, 4
        dec edx
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-4]
        fsubp 
        fstp dword ptr ds : [eax-0x10]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [eax-4]
        fxch 
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax-4]
        jne public_584361
        fstp st(0)
        push ecx
        fmul dword ptr ds : [public_5c77f4]
        fstp dword ptr ss : [esp]
        call public_4c8bc0
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        mov ebp, dword ptr ss : [esp+0x24]
        cmp ebp, ebx
        lea edx, ds:[esi+0x470]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        je public_584423
        lea edi, ds:[esi+0x2F8]
        mov eax, 0x3F800000
        mov dword ptr ds : [edi+0x20], eax
        mov dword ptr ds : [edi+0x10], eax
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+0x14], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_584423
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        cmp eax, ebx
        je public_584423
        mov edx, dword ptr ds : [eax]
        push edi
        push ebp
        mov ecx, eax
        call dword ptr ds : [edx+0x90]
        lea eax, ds:[esi+0x31C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x47C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], eax
        public_584423 : nop
        mov cl, byte ptr ds : [esi+0x518]
        mov al, byte ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x30]
        shl al, 2
        xor al, cl
        and al, 4
        xor al, cl
        mov cl, byte ptr ss : [esp+0x2C]
        shl cl, 3
        xor cl, al
        and cl, 8
        xor cl, al
        mov byte ptr ds : [esi+0x518], cl
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [esi+0x4C0], eax
        mov edx, dword ptr ds : [ecx]
        pop edi
        mov dword ptr ds : [esi+0x4BC], edx
        pop esi
        pop ebp
        pop ebx
        ret 0x24
        UNREACHABLE_TRAP(0x5842a0)
    }
}

#undef public_584361
#undef public_584423
