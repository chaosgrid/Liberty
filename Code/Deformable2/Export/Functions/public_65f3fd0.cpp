#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f3fd0);
CLANG_FORWARD_PROC_SYMBOL(public_65f6930);
CLANG_FORWARD_PROC_SYMBOL(public_65f69c0);

#define public_65f3fe7 _public_65f3fe7
#define public_65f401b _public_65f401b
#define public_65f4050 _public_65f4050
#define public_65f4066 _public_65f4066

PROC_DECLARE(0x65f3fd0, internal_65f3fd0, public_65f3fd0);
extern "C" NAKED register_t __cdecl internal_65f3fd0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        push edi
        xor edi, edi
        test eax, eax
        mov byte ptr ss : [esp+0x13], 0
        jle public_65f401b
        xor ebp, ebp
        public_65f3fe7 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+edi*4]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        add ecx, ebp
        call public_65f6930
        mov bl, byte ptr ss : [esp+0x13]
        or bl, al
        mov eax, dword ptr ds : [esi+4]
        inc edi
        add ebp, 0x34
        cmp edi, eax
        mov byte ptr ss : [esp+0x13], bl
        jl public_65f3fe7
        mov al, bl
        test al, al
        je public_65f401b
        mov dword ptr ds : [esi+0x28], 0xBF800000
        public_65f401b : nop
        fld dword ptr ds : [esi+0x28]
        fsub dword ptr ss : [esp+0x1C]
        fst dword ptr ds : [esi+0x28]
        fcomp dword ptr ds : [public_6601318]
        fnstsw ax
        test ah, 0x41
        jp public_65f4066
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [public_660314c]
        xor edi, edi
        test eax, eax
        mov dword ptr ds : [esi+0x28], edx
        jle public_65f4066
        mov ebp, dword ptr ss : [esp+0x1C]
        xor ebx, ebx
        lea ebx, ds:[ebx]
        public_65f4050 : nop
        mov ecx, dword ptr ds : [esi+8]
        push ebp
        add ecx, ebx
        call public_65f69c0
        mov eax, dword ptr ds : [esi+4]
        inc edi
        add ebx, 0x34
        cmp edi, eax
        jl public_65f4050
        public_65f4066 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x65f3fd0)
    }
}

#undef public_65f3fe7
#undef public_65f401b
#undef public_65f4050
#undef public_65f4066
