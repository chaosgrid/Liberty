#include "Content-PCH.h"


#define public_6f2722a _public_6f2722a
#define public_6f27249 _public_6f27249
#define public_6f2726d _public_6f2726d
#define public_6f2728b _public_6f2728b
#define public_6f272ab _public_6f272ab
#define public_6f272bd _public_6f272bd
#define public_6f27326 _public_6f27326
#define public_6f27334 _public_6f27334

PROC_DECLARE(0x6f271f0, internal_6f271f0, public_6f271f0);
extern "C" NAKED register_t __cdecl internal_6f271f0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ds : [public_6fb3048]
        push edi
/*FIXUP push offset public_6fb91f8 @0x6f27201*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb91f8
        mov ebx, ecx
        push 0
        mov ecx, ebp
        call esi
        mov edi, dword ptr ds : [public_6fb3294]
        push eax
        call edi
        add esp, 8
        test eax, eax
        jne public_6f2722a
        mov dword ptr ds : [ebx+0x118], 1
        jmp public_6f27249
/*FIXUP public_6f2722a : nop
        push offset public_6fb5b6c @0x6f2722a*/
  FIXUP public_6f2722a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5b6c
        push 0
        mov ecx, ebp
        call esi
        push eax
        call edi
        add esp, 8
        test eax, eax
        jne public_6f27249
        mov dword ptr ds : [ebx+0x118], 2
        public_6f27249 : nop
        mov eax, dword ptr ds : [ebx+0x118]
        cmp eax, 1
        jne public_6f272bd
        push eax
        mov ecx, ebp
        call esi
        mov esi, eax
        test esi, esi
        jne public_6f2726d
        mov dword ptr ds : [ebx+0x154], eax
        mov byte ptr ds : [ebx+0x158], al
        jmp public_6f272ab
        public_6f2726d : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ds:[ebx+0x158]
        jb public_6f2728b
        mov eax, 0x2F
        public_6f2728b : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebx+0x158], 0
        mov dword ptr ds : [ebx+0x154], eax
        public_6f272ab : nop
        push 2
        mov ecx, ebp
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f27334
        push 2
        jmp public_6f27326
        public_6f272bd : nop
        cmp eax, 2
        jne public_6f27334
        push 3
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        push 2
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x24]
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], eax
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ds:[ebx+0x120]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+4], ecx
        push 4
        mov ecx, ebp
        mov dword ptr ds : [edx+8], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f27334
        push 4
        public_6f27326 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3040]
        mov byte ptr ds : [ebx+0x150], al
        public_6f27334 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f271f0)
    }
}

#undef public_6f2722a
#undef public_6f27249
#undef public_6f2726d
#undef public_6f2728b
#undef public_6f272ab
#undef public_6f272bd
#undef public_6f27326
#undef public_6f27334
