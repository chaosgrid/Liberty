#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f61430);
CLANG_FORWARD_PROC_SYMBOL(public_6f61560);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

#define public_6f61459 _public_6f61459
#define public_6f61480 _public_6f61480
#define public_6f614bf _public_6f614bf
#define public_6f614d3 _public_6f614d3

PROC_DECLARE(0x6f61430, internal_6f61430, public_6f61430);
extern "C" NAKED register_t __cdecl internal_6f61430()
{
    __asm
    {
        mov al, byte ptr ds : [public_6fd1b80]
        sub esp, 0x1C
        push ebx
        push ebp
        mov bl, 1
        test bl, al
        push esi
        push edi
        jne public_6f61459
        mov dl, al
        or dl, bl
/*FIXUP push offset _public_6f61560 @0x6f61446*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f61560
        mov byte ptr ds : [public_6fd1b80], dl
        call public_6fa9162
        add esp, 4
        public_6f61459 : nop
        mov al, byte ptr ds : [public_6fd1ab9]
        test al, al
        jne public_6f614bf
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x10], 0
        mov eax, offset public_6fd1ac0
        mov ecx, 0x10
        public_6f61480 : nop
        fild dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [esp+0x10]
        mov esi, eax
        inc ebp
        fmul dword ptr ds : [public_6fbbc44]
        add eax, 0xC
        dec ecx
        mov dword ptr ss : [esp+0x10], ebp
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x14]
        fsin 
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], edx
        fstp dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], edi
        jne public_6f61480
        mov byte ptr ds : [public_6fd1ab9], bl
        public_6f614bf : nop
        mov ebx, dword ptr ss : [esp+0x3C]
        mov edi, dword ptr ss : [esp+0x30]
        mov esi, offset public_6fd1ac8
        sub ebx, esi
        mov ebp, 0x10
        public_6f614d3 : nop
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x30], ecx
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x3C], eax
        fild dword ptr ss : [esp+0x3C]
        lea edx, ds:[ebx+esi]
        add esi, 0xC
        dec ebp
        fmul dword ptr ds : [public_6fb4448]
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ss : [esp+0x30]
        fmulp 
        fadd dword ptr ss : [esp+0x30]
        fld st(0)
        fmul dword ptr ds : [esi-0x14]
        fld st(1)
        fmul dword ptr ds : [esi-0x10]
        fstp dword ptr ss : [esp+0x24]
        fxch 
        fmul dword ptr ds : [esi-0xC]
        fstp dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [edi+8]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [edx+4], ecx
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+8], eax
        jne public_6f614d3
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f61430)
    }
}

#undef public_6f61459
#undef public_6f61480
#undef public_6f614bf
#undef public_6f614d3
