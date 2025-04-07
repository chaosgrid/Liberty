#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001710);

#define public_10001c24 _public_10001c24
#define public_10001c60 _public_10001c60
#define public_10001c9d _public_10001c9d
#define public_10001ca6 _public_10001ca6

PROC_DECLARE(0x10001bc0, internal_10001bc0, public_10001bc0);
extern "C" NAKED register_t __cdecl internal_10001bc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebp, edi
        je public_10001ca6
        mov ebx, dword ptr ds : [eax+0x1C]
        test ebx, ebx
        je public_10001ca6
        mov esi, dword ptr ss : [esp+0x18]
        test esi, esi
        je public_10001ca6
        cmp dword ptr ds : [ebx+4], 0x2A
        jne public_10001ca6
        mov eax, dword ptr ds : [eax+0x30]
        push edi
        push esi
        push eax
        call public_10001710
        cmp edi, 3
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x30], eax
        jb public_10001c9d
        mov eax, dword ptr ds : [ebx+0x24]
        add eax, 0xFFFFFEFA
        cmp edi, eax
        jbe public_10001c24
        mov ebp, eax
        sub edi, ebp
        add esi, edi
        public_10001c24 : nop
        mov edi, dword ptr ds : [ebx+0x30]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edx, dword ptr ds : [ebx+0x30]
        mov ecx, dword ptr ds : [ebx+0x50]
        mov dword ptr ds : [ebx+0x64], ebp
        mov dword ptr ds : [ebx+0x54], ebp
        movzx eax, byte ptr ds : [edx]
        mov dword ptr ds : [ebx+0x40], eax
        shl eax, cl
        movzx ecx, byte ptr ds : [edx+1]
        xor eax, ecx
        and eax, dword ptr ds : [ebx+0x4C]
        mov dword ptr ds : [ebx+0x40], eax
        xor edx, edx
        lea esi, ss:[ebp-3]
        lea esp, ss:[esp]
        public_10001c60 : nop
        mov edi, dword ptr ds : [ebx+0x40]
        mov ecx, dword ptr ds : [ebx+0x50]
        mov eax, dword ptr ds : [ebx+0x30]
        movzx eax, byte ptr ds : [eax+edx+2]
        mov ebp, dword ptr ds : [ebx+0x38]
        shl edi, cl
        mov ecx, dword ptr ds : [ebx+0x4C]
        xor eax, edi
        mov edi, dword ptr ds : [ebx+0x2C]
        and eax, ecx
        mov ecx, dword ptr ds : [ebx+0x3C]
        mov dword ptr ds : [ebx+0x40], eax
        mov ax, word ptr ds : [ecx+eax*2]
        and edi, edx
        mov word ptr ss : [ebp+edi*2], ax
        mov ecx, dword ptr ds : [ebx+0x40]
        mov eax, dword ptr ds : [ebx+0x3C]
        mov word ptr ds : [eax+ecx*2], dx
        inc edx
        cmp edx, esi
        jbe public_10001c60
        public_10001c9d : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_10001ca6 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFE
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x10001bc0)
    }
}

#undef public_10001c24
#undef public_10001c60
#undef public_10001c9d
#undef public_10001ca6
