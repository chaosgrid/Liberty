#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421b70);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_498470);

PROC_DECLARE(0x498470, internal_498470, public_498470);
extern "C" NAKED register_t __cdecl internal_498470()
{
    __asm
    {
        sub esp, 0x20
        fld dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x24]
        push ebx
        fld dword ptr ss : [esp+0x38]
        mov ebx, dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x2C]
        push ebp
        mov ebp, dword ptr ss : [esp+0x3C]
        push esi
        fpatan 
        mov esi, dword ptr ss : [esp+0x48]
        push edi
        mov edi, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x18], edi
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+3]
        mov dword ptr ss : [esp+0x1C], eax
        xor edx, edx
        mov dl, byte ptr ds : [esi+2]
        xor eax, eax
        mov al, byte ptr ds : [esi+1]
        mov dword ptr ss : [esp+0x24], ebx
        push ecx
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        push edx
        mov dword ptr ss : [esp+0x30], ebp
        push eax
        push ecx
        fadd qword ptr ds : [public_5d3e88]
        fld st(0)
        fsin 
        fxch 
        fcos 
        fstp dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x64]
        fst dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x64]
        fst dword ptr ss : [esp+0x64]
        fadd dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x64]
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x38]
        call public_421b70
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x48]
        push edx
        push eax
        push edi
        call public_421cc0
        mov edi, dword ptr ss : [esp+0x6C]
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+3]
        xor edx, edx
        mov dl, byte ptr ds : [edi+2]
        xor eax, eax
        mov al, byte ptr ds : [edi+1]
        push ecx
        xor ecx, ecx
        mov cl, byte ptr ds : [edi]
        push edx
        push eax
        push ecx
        call public_421b70
        mov eax, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x48]
        push eax
        mov eax, dword ptr ss : [esp+0x48]
        push edx
        push eax
        call public_421cc0
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+3]
        xor edx, edx
        mov dl, byte ptr ds : [esi+2]
        xor eax, eax
        mov al, byte ptr ds : [esi+1]
        push ecx
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        push edx
        push eax
        push ecx
        call public_421b70
        mov edx, dword ptr ss : [esp+0x90]
        add esp, 0x48
        push edx
        push ebp
        push ebx
        call public_421cc0
        mov eax, dword ptr ss : [esp+0x54]
        push eax
        push ebp
        push ebx
        call public_421cc0
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+3]
        xor edx, edx
        mov dl, byte ptr ds : [edi+2]
        xor eax, eax
        mov al, byte ptr ds : [edi+1]
        push ecx
        xor ecx, ecx
        mov cl, byte ptr ds : [edi]
        push edx
        push eax
        push ecx
        call public_421b70
        mov eax, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ss : [esp+0x50]
        push eax
        mov eax, dword ptr ss : [esp+0x50]
        push edx
        push eax
        call public_421cc0
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x4C]
        push eax
        push ecx
        push edx
        call public_421cc0
        fld dword ptr ss : [esp+0x74]
        fsub dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x74]
        mov ecx, dword ptr ss : [esp+0x78]
        mov edx, dword ptr ss : [esp+0x7C]
        mov dword ptr ss : [esp+0x58], eax
        fstp dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x88]
        mov dword ptr ss : [esp+0x5C], ecx
        fld dword ptr ss : [esp+0x5C]
        fsub dword ptr ss : [esp+0x94]
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+3]
        mov dword ptr ss : [esp+0x60], edx
        fstp dword ptr ss : [esp+0x5C]
        xor edx, edx
        fld dword ptr ss : [esp+0x80]
        mov dl, byte ptr ds : [esi+2]
        fsub dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x64], ebx
        mov dword ptr ss : [esp+0x68], ebp
        add esp, 0x40
        fstp dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x2C], eax
        fld dword ptr ss : [esp+0x28]
        push ecx
        fsub dword ptr ss : [esp+0x58]
        xor eax, eax
        mov al, byte ptr ds : [esi+1]
        push edx
        fstp dword ptr ss : [esp+0x30]
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        push eax
        push ecx
        call public_421b70
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x44]
        push edx
        push eax
        push ecx
        call public_421cc0
        xor edx, edx
        mov dl, byte ptr ds : [edi+3]
        xor eax, eax
        mov al, byte ptr ds : [edi+2]
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+1]
        push edx
        xor edx, edx
        mov dl, byte ptr ds : [edi]
        push eax
        push ecx
        push edx
        call public_421b70
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x44]
        push eax
        push ecx
        push edx
        call public_421cc0
        xor eax, eax
        mov al, byte ptr ds : [esi+3]
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+2]
        xor edx, edx
        mov dl, byte ptr ds : [esi+1]
        push eax
        xor eax, eax
        mov al, byte ptr ds : [esi]
        push ecx
        push edx
        push eax
        call public_421b70
        mov esi, dword ptr ss : [esp+0x90]
        add esp, 0x48
        push esi
        push ebp
        push ebx
        call public_421cc0
        push esi
        push ebp
        push ebx
        call public_421cc0
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+3]
        xor edx, edx
        mov dl, byte ptr ds : [edi+2]
        xor eax, eax
        mov al, byte ptr ds : [edi+1]
        push ecx
        xor ecx, ecx
        mov cl, byte ptr ds : [edi]
        push edx
        push eax
        push ecx
        call public_421b70
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x4C]
        push edx
        push eax
        push ecx
        call public_421cc0
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x4C]
        push edx
        push eax
        push ecx
        call public_421cc0
        add esp, 0x40
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x498470)
    }
}
