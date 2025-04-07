#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_62433ad _public_62433ad
#define public_62433d1 _public_62433d1
#define public_62433d5 _public_62433d5
#define public_62433da _public_62433da
#define public_624340c _public_624340c
#define public_624340e _public_624340e
#define public_6243423 _public_6243423
#define public_6243449 _public_6243449
#define public_624345a _public_624345a

PROC_DECLARE(0x6243390, internal_6243390, public_6243390);
extern "C" NAKED register_t __cdecl internal_6243390()
{
    __asm
    {
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        xor ebp, ebp
        cmp dword ptr ds : [edi], 8
        jne public_6243449
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        public_62433ad : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_62433d5
        test cl, cl
        je public_62433d1
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_62433d5
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_62433ad
        public_62433d1 : nop
        xor eax, eax
        jmp public_62433da
        public_62433d5 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_62433da : nop
        test eax, eax
        pop ebx
        jne public_6243449
        push 0x10
        call public_624612c
        add esp, 4
        test eax, eax
        je public_624340c
        mov dword ptr ds : [eax+4], 0x3F800000
        mov dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax], offset public_624bca0
        mov dword ptr ds : [eax+0xC], 1
        mov esi, eax
        jmp public_624340e
        public_624340c : nop
        xor esi, esi
        public_624340e : nop
        test esi, esi
        jne public_6243423
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        ret 0xC
        public_6243423 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [edx+0x4C]
        mov edi, eax
        test edi, edi
        je public_624345a
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0x48]
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        public_6243449 : nop
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ebp
        pop ebp
        ret 0xC
        public_624345a : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6243390)
    }
}

#undef public_62433ad
#undef public_62433d1
#undef public_62433d5
#undef public_62433da
#undef public_624340c
#undef public_624340e
#undef public_6243423
#undef public_6243449
#undef public_624345a
