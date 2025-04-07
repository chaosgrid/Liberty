#include "Shading-PCH.h"


#define public_6eb84d3 _public_6eb84d3
#define public_6eb84d5 _public_6eb84d5
#define public_6eb84f9 _public_6eb84f9
#define public_6eb84fd _public_6eb84fd
#define public_6eb8502 _public_6eb8502
#define public_6eb8512 _public_6eb8512
#define public_6eb8528 _public_6eb8528
#define public_6eb8557 _public_6eb8557

PROC_DECLARE(0x6eb84c0, internal_6eb84c0, public_6eb84c0);
extern "C" NAKED register_t __cdecl internal_6eb84c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed1c20]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6eb8512
        mov ebp, dword ptr ss : [esp+0x18]
        public_6eb84d3 : nop
        mov esi, ebp
        public_6eb84d5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6eb84fd
        test cl, cl
        je public_6eb84f9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6eb84fd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6eb84d5
        public_6eb84f9 : nop
        xor eax, eax
        jmp public_6eb8502
        public_6eb84fd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6eb8502 : nop
        test eax, eax
        je public_6eb8528
        mov eax, dword ptr ds : [edi*8+public_6ed1c28]
        inc edi
        test eax, eax
        jne public_6eb84d3
        public_6eb8512 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6eb8528 : nop
        mov eax, dword ptr ds : [edi*8+public_6ed1c24]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6eb8557
        mov edx, dword ptr ds : [ecx+8]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+edx]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6eb8557 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [esi+eax]
        add esi, eax
        push esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6eb84c0)
    }
}

#undef public_6eb84d3
#undef public_6eb84d5
#undef public_6eb84f9
#undef public_6eb84fd
#undef public_6eb8502
#undef public_6eb8512
#undef public_6eb8528
#undef public_6eb8557
