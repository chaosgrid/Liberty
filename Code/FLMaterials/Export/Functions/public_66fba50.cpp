#include "FLMaterials-PCH.h"


#define public_66fba63 _public_66fba63
#define public_66fba65 _public_66fba65
#define public_66fba89 _public_66fba89
#define public_66fba8d _public_66fba8d
#define public_66fba92 _public_66fba92
#define public_66fbaa2 _public_66fbaa2
#define public_66fbab8 _public_66fbab8
#define public_66fbae7 _public_66fbae7

PROC_DECLARE(0x66fba50, internal_66fba50, public_66fba50);
extern "C" NAKED register_t __cdecl internal_66fba50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6702844]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_66fbaa2
        mov ebp, dword ptr ss : [esp+0x18]
        public_66fba63 : nop
        mov esi, ebp
        public_66fba65 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_66fba8d
        test cl, cl
        je public_66fba89
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_66fba8d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_66fba65
        public_66fba89 : nop
        xor eax, eax
        jmp public_66fba92
        public_66fba8d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66fba92 : nop
        test eax, eax
        je public_66fbab8
        mov eax, dword ptr ds : [edi*8+public_670284c]
        inc edi
        test eax, eax
        jne public_66fba63
        public_66fbaa2 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_66fbab8 : nop
        mov eax, dword ptr ds : [edi*8+public_6702848]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_66fbae7
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
        public_66fbae7 : nop
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
        UNREACHABLE_TRAP(0x66fba50)
    }
}

#undef public_66fba63
#undef public_66fba65
#undef public_66fba89
#undef public_66fba8d
#undef public_66fba92
#undef public_66fbaa2
#undef public_66fbab8
#undef public_66fbae7
