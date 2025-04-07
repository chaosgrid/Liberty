#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63523d0);
CLANG_FORWARD_PROC_SYMBOL(public_6352580);
CLANG_FORWARD_PROC_SYMBOL(public_636b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_636cfa0);

#define public_636b3e2 _public_636b3e2
#define public_636b42c _public_636b42c
#define public_636b438 _public_636b438
#define public_636b47f _public_636b47f
#define public_636b4d1 _public_636b4d1
#define public_636b505 _public_636b505

PROC_DECLARE(0x636b3a0, internal_636b3a0, public_636b3a0);
extern "C" NAKED register_t __cdecl internal_636b3a0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x7C]
        test eax, eax
        push esi
        push edi
        jne public_636b3e2
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax+8]
        mov edi, dword ptr ss : [esp+0x24]
        shr ecx, 8
        shl ecx, 4
        mov edx, ecx
        shr ecx, 2
        mov esi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ds : [eax+8]
        pop edi
        shr eax, 8
        pop esi
        shl eax, 4
        pop ebx
        add esp, 0x10
        ret 8
        public_636b3e2 : nop
        mov edx, dword ptr ss : [esp+0x20]
        movsx eax, word ptr ds : [edx+0xC]
        mov edi, dword ptr ss : [esp+0x24]
        inc eax
        shl eax, 4
        mov ecx, eax
        push ebp
        mov ebp, ecx
        shr ecx, 2
        mov esi, edx
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [edx]
        add ecx, edx
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x18], ecx
        movsx ecx, word ptr ds : [edx+0xC]
        dec ecx
        mov dword ptr ss : [esp+0x1C], eax
        js public_636b505
        add edx, 0x14
        inc ecx
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x14], ecx
        public_636b42c : nop
        mov ebp, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x10], 3
        public_636b438 : nop
        mov esi, dword ptr ss : [ebp]
        mov edi, dword ptr ss : [esp+0x18]
        and esi, 0xFFFF
        shl esi, 4
        add esi, edi
        mov edi, dword ptr ds : [ebx+0x7C]
        push esi
        mov ecx, edi
        call public_636cfa0
        push eax
        push esi
        mov ecx, edi
        call public_6352580
        test eax, eax
        je public_636b47f
        mov edx, dword ptr ds : [ebx+0x74]
        mov ecx, dword ptr ss : [ebp]
        sub eax, edx
        sar eax, 4
        and eax, 0xFFFF
        and ecx, 0xFFFF0000
        xor eax, ecx
        mov dword ptr ss : [ebp], eax
        jmp public_636b4d1
        public_636b47f : nop
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [ebx+0x78]
        xor edx, ecx
        mov edi, ecx
        and edx, 0xFFFF
        xor edi, edx
        mov dword ptr ss : [ebp], edi
        mov eax, dword ptr ds : [ebx+0x78]
        mov ecx, dword ptr ds : [ebx+0x74]
        mov edi, eax
        shl edi, 4
        add edi, ecx
        inc eax
        mov dword ptr ds : [ebx+0x78], eax
        mov ecx, dword ptr ds : [esi]
        mov eax, edi
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov esi, dword ptr ds : [ebx+0x7C]
        push edi
        mov ecx, esi
        call public_636cfa0
        push eax
        push edi
        mov ecx, esi
        call public_63523d0
        public_636b4d1 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add ebp, 4
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_636b438
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x14]
        add ecx, 0x10
        dec eax
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_636b42c
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x1C]
        public_636b505 : nop
        mov ecx, dword ptr ds : [ebx+0x74]
        pop ebp
        pop edi
        sub ecx, edx
        pop esi
        mov dword ptr ds : [edx], ecx
        pop ebx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x636b3a0)
    }
}

#undef public_636b3e2
#undef public_636b42c
#undef public_636b438
#undef public_636b47f
#undef public_636b4d1
#undef public_636b505
