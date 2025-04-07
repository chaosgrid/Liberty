#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e0e10);
CLANG_FORWARD_PROC_SYMBOL(public_62e1330);

#define public_62e1370 _public_62e1370
#define public_62e13d5 _public_62e13d5
#define public_62e13da _public_62e13da

PROC_DECLARE(0x62e1330, internal_62e1330, public_62e1330);
extern "C" NAKED register_t __cdecl internal_62e1330()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x50]
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        sub esp, 0x1C
        mov edi, esp
        mov ecx, 7
        rep movsd
        mov esi, dword ptr ss : [esp+0x70]
        mov edi, dword ptr ss : [esp+0x6C]
        push esi
        push edi
        call public_62e0e10
        mov ebp, eax
        add esp, 0x28
        xor edx, edx
        xor ebx, ebx
        test ebp, ebp
        mov dword ptr ss : [esp+0x54], ebp
        jle public_62e13da
        lea ecx, ss:[esp+0x30]
        public_62e1370 : nop
        fld dword ptr ss : [esp+ebx*4+0x10]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_62e13d5
        fld dword ptr ss : [esp+ebx*4+0x10]
        mov eax, ecx
        fld st(0)
        inc edx
        fmul dword ptr ds : [esi]
        add ecx, 0xC
        fld st(1)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x28]
        fxch 
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [edi+4]
        mov dword ptr ds : [eax], ebp
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+4], ebp
        fstp dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+8], ebp
        mov ebp, dword ptr ss : [esp+0x54]
        public_62e13d5 : nop
        inc ebx
        cmp ebx, ebp
        jl public_62e1370
        public_62e13da : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x38]
        pop edi
        mov dword ptr ds : [ecx+8], eax
        pop esi
        xor eax, eax
        test edx, edx
        pop ebp
        setg al
        pop ebx
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x62e1330)
    }
}

#undef public_62e1370
#undef public_62e13d5
#undef public_62e13da
