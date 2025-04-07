#include "Content-PCH.h"


#define public_6f07c5b _public_6f07c5b
#define public_6f07c79 _public_6f07c79
#define public_6f07c99 _public_6f07c99
#define public_6f07d79 _public_6f07d79
#define public_6f07db8 _public_6f07db8
#define public_6f07dd3 _public_6f07dd3

PROC_DECLARE(0x6f07c30, internal_6f07c30, public_6f07c30);
extern "C" NAKED register_t __cdecl internal_6f07c30()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        mov ebx, ecx
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        test esi, esi
        jne public_6f07c5b
        mov dword ptr ds : [ebx+0x140], eax
        mov byte ptr ds : [ebx+0x144], al
        jmp public_6f07c99
        public_6f07c5b : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ds:[ebx+0x144]
        jb public_6f07c79
        mov eax, 0x2F
        public_6f07c79 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebx+0x144], 0
        mov dword ptr ds : [ebx+0x140], eax
        public_6f07c99 : nop
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
        lea edx, ds:[ebx+0x124]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+4], ecx
        push 6
        mov ecx, ebp
        mov dword ptr ds : [edx+8], eax
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        push 5
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x24]
        push 4
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ds:[ebx+0x130]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        push 7
        mov ecx, ebp
        call dword ptr ds : [public_6fb3020]
        mov esi, dword ptr ds : [public_6fb306c]
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        push 8
        mov ecx, ebp
        fstp dword ptr ds : [ebx+0x13C]
        call esi
        test al, al
        jne public_6f07d79
        push 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3040]
        mov byte ptr ds : [ebx+0x176], al
        public_6f07d79 : nop
        push 9
        mov ecx, ebp
        call esi
        test al, al
        jne public_6f07dd3
        mov edi, dword ptr ds : [public_6fb3048]
/*FIXUP push offset public_6fb5f94 @0x6f07d89*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5f94
        push 9
        mov ecx, ebp
        call edi
        mov esi, dword ptr ds : [public_6fb3294]
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6f07db8
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x114], 1
        pop ebx
        add esp, 0x10
        ret 4
/*FIXUP public_6f07db8 : nop
        push offset public_6fb5f84 @0x6f07db8*/
  FIXUP public_6f07db8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5f84
        push 9
        mov ecx, ebp
        call edi
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6f07dd3
        mov dword ptr ds : [ebx+0x114], eax
        public_6f07dd3 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f07c30)
    }
}

#undef public_6f07c5b
#undef public_6f07c79
#undef public_6f07c99
#undef public_6f07d79
#undef public_6f07db8
#undef public_6f07dd3
